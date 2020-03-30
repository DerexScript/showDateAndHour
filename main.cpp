#if defined(UNICODE) && !defined(_UNICODE)
#define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
#define UNICODE
#endif


#include "include/curl/curl.h"
#include <windows.h>
#include <ctime>
#include <iostream>
#include "resource.h"
#include "myWindows.h"
#include "myWinMain.h"

int WINAPI WinMain (HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow) {
    return myWinMain(hThisInstance, hPrevInstance, lpszArgument, nCmdShow);
}
