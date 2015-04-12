#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a = 3;
int * p = &a;
int **q = &p;
int ***r = &q;
**q = 4;
printf("%d %d\n", *p, ***r);
}

