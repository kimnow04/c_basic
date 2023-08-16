#include <stdio.h>

int main( void )
{
	long long int h, b, c, s;
	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);

	float byte = (float)h*b*c*s/8;

	printf("%.1f MB", byte/(1024*1024));
	return 0;
}
