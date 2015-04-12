#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
int count1 = 0, count2 = 0, operand1int, operand2int, resultInt;
float operand1float, operand2float, resultFloat;
char innerChar, outerChar;
	do
	{
		if(count1 >= 1 && count1 % 2 == 0) { /*Iterates twice per user entry. Limited to even numbers for workaround*/
			printf("Your input is invalid. Please try again.\n"); 
		} /*Unacceptable entry, user asked to re-enter*/
			
		else if(count1 == 0)
		{
			printf("Welcome to the simple Calculator\n");/*user greeting and options displayed only once*/
			printf("Press q to quit\n");
			printf("Press a to add\n");
			printf("Press m to multiply\n");
		}
		count1++;
		scanf("%c", &outerChar);/*Accepts user entry for initial menu*/
	}while(outerChar != 'q' && outerChar != 'a' && outerChar != 'm');/*Loops code and allowed to continue with acceptable entry*/

if(outerChar == 'a' || outerChar == 'm')/*Enter only when addition or multiplication chosen*/
	{
		count1 = 0;	
		scanf("%c", &innerChar);	/*Entry of inner menu*/
		do
			{
				if(count2 % 2 == 0 && count2 > 0) /*Iterates twice per entry, limiting to even numbers as workaround*/
					printf("Your input is invalid. Please try again.\n");

				else if(count2 == 0)
				{
					printf("Press f for floats\n"); /*Further inner menu that is displayed once*/
					printf("Press i for integers\n");
				}
				count2 += 1;
				scanf("%c", &innerChar); /*Asks user to re-enter if need be*/
			}while(innerChar != 'f' && innerChar != 'i'); /*Exits the loop once user has acceptable entry*/

			/*Asks for two operands*/

				printf("Please enter two operands: ");
				if(innerChar == 'i') /*if user chose int, integer operators are used*/
				{
					scanf("%d %d", &operand1int, &operand2int);
					if(outerChar == 'a')
							resultInt = operand1int + operand2int;
					else
							resultInt = operand1int * operand2int;
					
					printf("The result is: %d\n", resultInt);
				}
				else if(innerChar == 'f') /*Otherwise floats are used*/
				{	scanf("%f %f", &operand1float, &operand2float);
					if(outerChar == 'a')
							resultFloat = operand1float + operand2float;
					else
							resultFloat = operand1float * operand2float;

					printf("The result is: %f\n", resultFloat);
				}
		}
else if(outerChar == 'q')
	{
		exit(0); /*If quit is chosen from the outer menu, end program*/
	}
}

