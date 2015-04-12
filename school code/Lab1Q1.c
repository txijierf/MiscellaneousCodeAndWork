#include <stdio.h>
#include <math.h>

int main(void)
{ int i;
int j;
  printf("Number \t Square root of number \n\n");
  for(i=0; i<=30; ++i)
  {
	j=sqrt(1.0 * i);
  	printf(" %d \t\t %d \n",i, j);
  }
}
