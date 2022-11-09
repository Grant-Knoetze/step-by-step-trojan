#include "Main.h"
#include <iostream>
#include <Windows.h>
#include <wininet.h>
#pragma comment (lib, "Wininet.lib") // Include Wininet.dll for http/s communication

using namespace std;

// Function with a simple loop that encrypts a string using XOR

void EncryptString(char* str, int length, char* buf, char key) {
	for (int i = 0; i < length; i++) {
		buf[i] = str[i] ^ key;
	}
	
}

/*InternetOpen is the first WinINet function called by an application.
It tells the Internet DLL to initialize internal data structures and 
prepare for future calls from the application. When the application 
finishes using the Internet functions, it should call InternetCloseHandle to 
free the handle and any associated resources.
*/
HINTERNET InternetOpen(LPCSTR domain, DWORD INTERNET_OPEN_TYPE_DIRECT, LPCSTR NULL, DWORD INTERNET_FLAG_OFFLINE);

BOOL InternetCloseHandle(HINTERNET InternetOpen)

int main()

{
	char* str = (char*)"http://192.168.1.3:8888/beacon"; // Treat string as an array of chars.
	int length = strlen(str);
	char* buf = (char*)malloc(length);

	
	// your encryption here
	EncryptString(str, length, buf, 0x01);

	printf("Encrypted String: %s\n", buf);

}