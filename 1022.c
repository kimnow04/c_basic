#include <stdio.h>

int main( void )
{
	char string[2001];
	fgets(string, 2000, stdin);
	printf("%s", string);
	return 0;
}
