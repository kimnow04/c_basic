#include <stdio.h>

int main( void )
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);

	for(i=1;n>=i;i++)
	{
		for(j=1;m>=j;j++)
		{
			printf("%d %d\n", i, j);
		}
	}
	return 0;
}
