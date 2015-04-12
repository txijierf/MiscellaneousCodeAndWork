#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int ppp(char *p, int q);
int * qqq(int p[], char q[]);
int rrr(char *p[], int *q);
int main(void)
{
	char *a = "examination";
	char b[] = "howdoyoudo", c[6];
	char *d, *e, *f[8], g;
	int h[5] = {1,2,3,4,5}, i, j[3][7];

	e = (char *)malloc(15*sizeof(char));
	for (i=0; i<8; i++){
		f[i] = (char *)malloc(20*sizeof(char));
		printf("f[%d] = %d\n", i, f[i]);
		printf("h[%d] = %d\n", i, h[i]);
		
	}
for(i = 0; i<10; i++)
	printf("%c",b[i]);
printf("\n");
}

