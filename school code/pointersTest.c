#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int *p;
	int a;
	printf("Enter a number: ");
	p = &a;
	scanf("%d",p);
	printf("%d %d\n", p, a);
	return 0;
}

