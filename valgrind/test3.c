#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = (int *) malloc (3*sizeof(int));
	p[3] = 10;
	printf("\n%d\n", p[3]);
	return 0;
}
