#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//char ch;
printf("Enter an RPN expression: ");
calculation(ch);
printf("Value of expression: ");
}

int calculation(char ch)
{
	while(ch != 'q')
	{
		scanf(" %c", &ch);
	}
}


