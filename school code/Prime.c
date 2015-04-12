#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_prime( int m)
{
	int i,j;
	int *ary = (int *)malloc(m * sizeof(int));
	if(ary==NULL)exit - 1;
	for(i=0;i<m;i++)
		ary[i]=1;
	ary[0]=ary[1]=0;
	for(i=3;i<m;i++){
		for(j=2; j<i; j++)
			if(ary[i]&&i%j==0){
				ary[i]=0;
				break;
			}
	}
	for(i=0;i<m;i++)
		if(ary[i])printf("%d ",i);
	free( ary );
	printf("\n");
}

int main(void)
{
	int m;
	printf("m = ");
	scanf("%d", &m);
	printf("\n");
	print_prime(m);
	return 0;
}

