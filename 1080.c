#include <stdio.h>

int main( void )
{
	int n, i = 1;

	int val = 0;

	scanf("%d", &n);

	while(1)
	{
		val += i;
		
		if(val >= n){
			printf("%d", i);
			break;
		}
		else
			i+=1;
	}
	return 0;
}
