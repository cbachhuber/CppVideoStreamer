#include "tcpSocket.hpp"

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

TcpSocket::TcpSocket(int port) {
  portID = port;
}

TcpSocket::~TcpSocket() {
    close(sockID);
    std::cout << "Socket closed.\n";
}

int TcpSocket::listenForLocalConnection(){

	int tempsockID = 0;
    struct sockaddr_in remaddr, cli_addr;
    socklen_t clilen;

	if ((tempsockID=socket(AF_INET, SOCK_STREAM, 0)) < 0){
		std::cout << "Could not create socket!\n";  // SOCK_STREAM invokes TCP, SOCK_DGRAM would invoke UDP
		return 0;
	}

	memset((char *) &remaddr, 0, sizeof(remaddr));
	remaddr.sin_family = AF_INET;
	remaddr.sin_addr.s_addr = INADDR_ANY;  // For TCP, we are listening on our own socket
	remaddr.sin_port = htons(portID);

	//For TCP
	if(bind(tempsockID, (struct sockaddr *) &remaddr,sizeof(remaddr)) < 0){
		std::cout << "Error on socket binding!\n";
		return 0;
	}

	listen(tempsockID,5);
	clilen = sizeof(cli_addr);
	std::cout << "Waiting for TCP connection...\n";
	sockID = accept(tempsockID,(struct sockaddr *) &cli_addr, &clilen);
	if(sockID < 0){
		std::cout << "Error on accepting TCP connection!\n";
		return 0;
	}

    // Temporary socket not needed anymore, closing
	close(tempsockID);
	std::cout << "Established TCP connection!\n";

	return 1;
}

int TcpSocket::send(unsigned char * addr, int len){
	return write(sockID, addr, len);
}
