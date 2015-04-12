#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
unsigned int m, n, *p, tempI=0, randInt;
printf("Enter a positive integer n: ");
scanf("%d", &n);
printf("Enter a positive integer m: ");
scanf("%d", &m);

p = (int *) malloc((n*m) * sizeof(int));
unsigned int B[n][m], tempN, tempM, A[m][n];
srand( time(NULL) );

printf("Matrix A: \n");
for(tempI = 0; tempI < m*n; tempI++)
	{
		//p[tempI] = tempI;
		randInt = rand();
		p[tempI] = randInt;
	
		if(n < 21 && m <21 && n>0 && n>0) {
			printf("%d\t", randInt);
				if((tempI + 1) % n == 0)
					printf("\n");
		}
	}
/*Reflects the matrix on the main diagonal*/
printf("A2:\n");
	for(tempM = 0; tempM < m; tempM++)
		{
			for(tempN = 0; tempN < n; tempN++)
				{
					A[tempM][tempN] = p[tempN + (n * tempM)];
					printf("%d\t", A[tempM][tempN]);
				}
			printf("\n");
		}

printf("Matrix B: \n");
for(tempN = 0; tempN < n; tempN++)
		{
			for(tempM = 0; tempM < m; tempM++)
			{
				B[tempN][tempM] = p[tempN + (n * tempM)];
				printf("%d\t", B[tempN][tempM]);
			}
			printf("\n");
		}



free(p);
//free(q);
printf("\n");
}

