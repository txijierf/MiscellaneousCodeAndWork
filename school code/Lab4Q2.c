#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int userInt, i, squareNum;
printf("Enter an integer: ");
scanf("%d", &userInt);

for(i = 1; i < userInt; i++)
	{
		if(i % 2 == 0)
			{
				squareNum = i * i;
				if(squareNum <= userInt)
					{						
						printf("%d\n", squareNum);
					}
			}
	}
}

