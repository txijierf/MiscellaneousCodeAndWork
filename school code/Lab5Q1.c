#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N=6, inputArr[N], i=0, tempNum, inputArrTwo[N];
printf("The Input Array is:\t");
	for(i=0; i<N; i++)
		{
			inputArr[i] = rand();
			printf("%d\t", inputArr[i]);
		}
printf("\n");


/*	for(i=0; i<N; i++)
		{
			tempNum = inputArr[i];
			inputArr[i] = inputArr[N-i];
			inputArr[N-i] = tempNum;

			printf("%d\n", tempNum);
		}*/

/*printf("The Reverse Array is:\t");
	for(i=N-1; i>=0; i--)
		{
			printf("%d\t", inputArr[i]);
			inputArrTwo[N-i-1] = inputArr[i];
		}
printf("\n");*/

printf("The Reverse Array is:\t");
	for(i=0; i<N; i++)
		{
			printf("%d\t", inputArrTwo[i]);
		}
printf("\n");

}

