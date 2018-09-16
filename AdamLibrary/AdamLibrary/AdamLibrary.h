#pragma once
//#include"stdafx.h"

#ifdef ADAMLIBRARY_EXPORTS
#define ADAMLIBRARY_API __declspec(dllexport)
#else
#define ADAMLIBRARY_API __declspec(dllimport)
#endif


#include<iostream>

namespace AdamLibrary{
  
  class mySocket {
  
  public:

    mySocket(int);
    mySocket(int, const char*);

    ADAMLIBRARY_API void initializeWinSock();
    ADAMLIBRARY_API void setupSocketProtocols();
    ADAMLIBRARY_API void createSocket();
    ADAMLIBRARY_API void connectSocket();

  private:

    const char* ip;
    int         port;
    SOCKET      sock;
    SOCKADDR_IN addr;
    WSADATA     winSock;


  };

}