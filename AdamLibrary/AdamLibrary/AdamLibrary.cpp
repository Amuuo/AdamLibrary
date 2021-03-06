// AdamLibrary.cpp : Defines the exported functions for the DLL application.
//

#include"stdafx.h"
#include"AdamLibrary.h"



namespace AdamLibrary{


  mySocket::mySocket(int port) : port{port} 
  {
    ip = "192.168.1.6";
    initializeWinSock();
    setupSocketProtocols();
    createSocket();
    connectSocket();
  }

  mySocket::mySocket(int port, const char * ip) : port{port}, ip{ip} 
  {
    initializeWinSock();
    setupSocketProtocols();
    createSocket();
    connectSocket();
  }

  void mySocket::initializeWinSock()
  {	
	  if (WSAStartup(MAKEWORD(2, 2), &winSock) != 0)
    {
		  printf("\nFailed to initialize");
    }
    printf("\n>> Initialized Winsock...");
  }

  void mySocket::setupSocketProtocols() 
    {      
      memset(&addr, 0, sizeof(SOCKADDR_IN));
      addr.sin_addr.s_addr  = inet_addr(ip);
      addr.sin_family       = AF_INET;
      addr.sin_port         = htons(port);
      printf("\n>> Protocols established...");
    }
  
  
  void mySocket::createSocket() 
  {
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
	    printf("\n>> Count not create socket : \n");
    }
    printf("\n>> Connected to Socket...");
  }


  void mySocket::connectSocket() 
  {
    if ((connect(sock, (SOCKADDR*)&addr, sizeof(SOCKADDR))) < 0) 
    {
      printf("\n>> Could not connect socket");
    }
  }


}