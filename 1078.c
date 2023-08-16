#include <stdio.h>

int main( void )
{
	int n, i;
	int ans = 0;
	scanf("%d", &n);

	for(i=0;n>=i;i++)
	{
		if(i%2 == 0)
		{
			ans = ans + i;
		}
	}
	printf("%d", ans);
	
	return 0;
}

