
#ifndef TCPSOCKET_HPP_
#define TCPSOCKET_HPP_

class TcpSocket{
private:
	int portID;
	int sockID;

public:
	TcpSocket(int);
	TcpSocket(){};
	~TcpSocket();
	
	// Listens for a TCP connection on a local port returns 1 on successful connection, 0 on error
	int listenForLocalConnection();
	int send(unsigned char * , int );
};

#endif
