#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = (int *) malloc (4*sizeof(int));
	printf("\n%d\n", p[4]);
	return 0;
}
