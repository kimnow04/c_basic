#include <stdio.h>

int main( void )
{
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a+b+c);
	printf("%.1f", (float)(a+b+c)/(float)3);
	return 0;
}
