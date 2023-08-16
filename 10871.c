#include <stdio.h>

int small_num()
{
	int n, x, i;
	scanf("%d %d", &n, &x);
	
	int val;
	for(i=0;n>i;i++)
	{
		scanf("%d", &val);
		if(x > val)
		{
			printf("%d ", val);
		}	
	}
	return 0;
}
int main( void )
{
	small_num();
	return 0;
}
