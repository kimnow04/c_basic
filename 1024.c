#include <stdio.h>

int main( void )
{
	char data[21];
	int i;
	
	scanf("%s", data);
	for(i=0;data[i]!='\0';i++)
	{
		printf("\'%c\'\n",data[i]);
	}
	return 0;
}
