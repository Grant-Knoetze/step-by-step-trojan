#pragma once
#include <iostream>
#include <Windows.h>
#include <wininet.h>
#pragma comment (lib, "wininet.lib")

HINTERNET SendRequest(LPCSTR Domain, int Port, LPCSTR URI, LPCSTR Verb, const char* Params);