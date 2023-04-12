#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *ptr=(char*) malloc(2);
	*ptr='s';
	printf("%c %d \n", *ptr,ptr);
	ptr++;
	*ptr='a';
	printf("%c %d", *ptr,ptr);
}
