#include "tcp_socket.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

TcpSocket::TcpSocket(int port) : portID(port), sockID(0) {}

TcpSocket::~TcpSocket()
{
    close(sockID);
    std::cout << "Socket closed.\n";
}

bool TcpSocket::listenForLocalConnection()
{

    int tempSockId = 0;
    struct sockaddr_in remaddr{};
    struct sockaddr_in cliAddr{};
    socklen_t clilen = 0;

    tempSockId = socket(AF_INET, SOCK_STREAM, 0);
    if (tempSockId < 0)
    {
        std::cout << "Could not create socket!\n";  // SOCK_STREAM invokes TCP, SOCK_DGRAM would invoke UDP
        return false;
    }

    memset(reinterpret_cast<char*>(&remaddr), 0, sizeof(remaddr));
    remaddr.sin_family = AF_INET;
    remaddr.sin_addr.s_addr = INADDR_ANY;  // For TCP, we are listening on our own socket
    remaddr.sin_port = htons(portID);

    // For TCP
    if (bind(tempSockId, reinterpret_cast<struct sockaddr*>(&remaddr), sizeof(remaddr)) < 0)
    {
        std::cout << "Error on socket binding!\n";
        return false;
    }

    const auto maximumQueueLength = 5;
    listen(tempSockId, maximumQueueLength);
    clilen = sizeof(cliAddr);
    std::cout << "Waiting for TCP connection...\n";
    sockID = accept(tempSockId, reinterpret_cast<struct sockaddr*>(&cliAddr), &clilen);
    if (sockID < 0)
    {
        std::cout << "Error on accepting TCP connection!\n";
        return false;
    }

    // Temporary socket not needed anymore, closing
    close(tempSockId);
    std::cout << "Established TCP connection!\n";

    return true;
}

int TcpSocket::send(unsigned char* addr, int len) const
{
    return static_cast<int>(write(sockID, addr, len));
}
