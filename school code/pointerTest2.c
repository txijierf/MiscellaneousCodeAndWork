#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int *p;
	p = (int *) malloc(sizeof(int));
	scanf("%d", p);
	printf("%d\n", *p);
	free(p);
	
}

