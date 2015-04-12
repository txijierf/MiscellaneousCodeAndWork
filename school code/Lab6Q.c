#include <stdio.h>
#include <stdlib.h>

int main(void)
{
unsigned int m, n, i=0, j=0;
scanf("%d, %d", m, n);

int A[n][m];
for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
			{
				A[i][j] = rand();
			}
	}
}

