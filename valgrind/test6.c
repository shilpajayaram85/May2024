#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[5] = "hello";
	char *ptr = a;
	char *result;
	result = strcpy(a,ptr);
	printf("\n%s\n", result);
	return 0;
}
