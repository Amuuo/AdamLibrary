// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// Windows Header Files:
#include<Windows.h>
#include<winsock2.h>
#include<ws2tcpip.h>
#include<stdio.h>

#pragma comment(lib, "Ws2_32.lib")
// TODO: reference additional headers your program requires here
