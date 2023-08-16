#include <stdio.h>

int main( void )
{
	int n, i;

	scanf("%d", &n);

	for(i=1;n>=i;i++)
	{
		if(i%3 == 0)
			printf("X ");
		else
			printf("%d ", i);
	}
	return 0;
}
