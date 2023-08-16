#include <stdio.h>

int main( void )
{
	char x, y = 'a';
	scanf("%c", &x);

	do
	{
		printf("%c ", y);
		y = y + 1;
	}while(y < x + 1);
	return 0;
}
