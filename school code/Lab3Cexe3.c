#include <stdio.h>
#include <stdlib.h>

int main(void)
{/*Exercise 3*/
int count = 0, entered;
printf("Enter a number: ");
scanf("$%d$", &entered);

while(entered > 0)
	{
		entered /= 10;
		count += 1;
	}

printf("There are %d digits.\n", count);
}

