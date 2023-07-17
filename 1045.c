#include <stdio.h>

int main( void )
{
	unsigned int a, b;
	scanf("%u %u", &a, &b);
	printf("%u\n", a+b);
	printf("%u\n", a-b);
	printf("%u\n", a*b);
	printf("%u\n", a/b);
	printf("%u\n", a%b);
	printf("%.2f", (float)a/(float)b);
}
