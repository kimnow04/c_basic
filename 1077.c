#include <stdio.h>

int main( void )
{
	int n, i;
	scanf("%d", &n);

	for(i=0;n>=i;i++)
	{
		printf("%d\n", i);
	}
	return 0;
}

