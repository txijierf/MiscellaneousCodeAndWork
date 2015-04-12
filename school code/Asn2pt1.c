#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char response1, response2;
printf("Welcome to the simple Calculator\n");
printf("Press q to quit\n");
printf("Press a to add\n");
printf("Press m to multiply\n");
scanf("%c", &response1);

if(response1 == 'a' || response1 == 'm')
	{
		printf("Press f for floats\n");
		printf("Press i for integers\n");
		scanf("%c", &response2);
	}
else if(response1 == 'q')
	{

	}
else
	{
		do
		{
			printf("Your input is invalid. Please try again.\n");
			scanf("%c", &response1);
		}while(response1 != 'q' || response1 != 'a' || response1 != 'm');
	}

}

