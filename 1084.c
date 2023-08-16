#include <stdio.h>

int main( void )
{
	int a, b, c;
	int i, j, k;
	
	scanf("%d %d %d", &a, &b, &c);

	for(i=0;a>i;i++)
	{
		for(j=0;b>j;j++)
		{
			for(k=0;c>k;k++)
			{
				printf("%d %d %d\n", i, j, k);
			}
		}
	}

	printf("%d", a*b*c);
	return 0;
}
