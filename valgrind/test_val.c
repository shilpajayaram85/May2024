#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *i;
  int *j;
  int k;
  int x = 10;
  i = (int *) malloc (sizeof(int));

  if(i == NULL)
  {
  	printf("\nMemory allocation failed\n");
	exit(EXIT_FAILURE);
  }

  j = (int *) malloc (sizeof(int));

  if(j == NULL)
  {
  	printf("\nMemory allocation failed\n");
	exit(EXIT_FAILURE);
  }

  printf("\nEnter value for i: \n");
  scanf("%d", i);
  printf("\nEnter value for j: \n");
  scanf("%d", j);

  j = &x;

  k = *i + *j;

  printf("\nThe sum is %d\n", k);
 
  free(i);
  //free(j);
  return 0;
 }


