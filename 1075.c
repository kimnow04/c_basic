#include <stdio.h>

int main( void )
{
	int n;
	scanf("%d", &n);

	while(n > 0)
	{
		n = n-1;
		printf("%d\n", n);
	}
	return 0;
}
