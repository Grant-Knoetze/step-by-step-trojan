#include "main.h"

using namespace std;


int main()
{
	char* str = (char*)"http://192.168.1.3:8888/beacon"; // Treat string as an array of chars.
	int length = strlen(str);
	char* buf = (char*)malloc(length);

	// your encryption here

	printf("Encrypted String: %s", buf);

}
