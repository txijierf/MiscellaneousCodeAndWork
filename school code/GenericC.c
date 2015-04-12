#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int N = 7;
int main(void)
{
	int array[N], i=0, tempInt, j = 0;
	printf("Input array: ");
	for(i=0; i<N;i++)
		{
			array[i] = rand();
			printf("%d ", array[i]);
			if(i == 6)
				printf("\n");
		}
	
	printf("Output array: ");

//do
//{
	for(i=6; i>=0; i--)
	{
		tempInt = array[i];
		array[i] = array[N - i - 1];
		array[N - i - 1] = tempInt;
		if(i == (N - i - 1))
			break;
	}
//}while((N - i - 1) < 2);

	for(j=0; j<N; j++)
		{
			printf("%d ", array[j]);
			if(j == 6)
				printf("\n");
		}
	
}


