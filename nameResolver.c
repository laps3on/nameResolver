#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char*argv[])
{
	char * alvo;
	target = argv[1];

	struct hostent * host;
	host = gethostbyname(target);

	printf("%s ==> %s\n", target, inet_ntoa(*((struct in_addr*) host -> h_addr)));
	return 0;
}