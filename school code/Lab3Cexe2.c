#include <stdio.h>
#include <stdlib.h>

int main(void)
{/*Exercise 2*/
int inputNum = 0, tempM = 0;
printf("Enter a number: ");
scanf("$%d$", &inputNum);

while(inputNum > 0)
	{
		tempM *= 10;
		tempM += inputNum % 10;
		inputNum /= 10;
	}
printf("$%d$\n", tempM);
}

