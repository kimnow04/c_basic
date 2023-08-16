
#include <stdio.h>
 
int main( void )
{
    long long int w, h, b;
   
    scanf("%lld %lld %lld", &w, &h, &b);
    double byte = w*h*b/8;

    printf("%.2lf MB", byte/(1024*1024));
    return 0;
}
