
#ifndef TCPSOCKET_HPP_
#define TCPSOCKET_HPP_

class TcpSocket
{
  private:
    int portID;
    int sockID;

  public:
    TcpSocket(int);
    TcpSocket() {};
    ~TcpSocket();

    // Listens for a TCP connection on a local port returns true on successful connection, false on error
    bool listenForLocalConnection();
    int send(unsigned char*, int) const;
};

#endif
