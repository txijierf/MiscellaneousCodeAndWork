#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h> /* C99 only */
#include <ctype.h>
//gcc –E –std=c99 simple.c
#define STACK_SIZE 100

/* external variables */
float contents[STACK_SIZE];
int top = 0;
/* Stack in C */
void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void stack_overflow()
{
	printf("Expression is too complex.");
}

void stack_underflow()
{
	printf("Not enough operands.");
}

void push(float i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

float pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}


/*Main Function*/
int main(void)
{

char ch[30];//replace 10
float result = 0;
printf("Enter an reverse polish notation expression: ");



int i = 30;//replace 10
float pop1=0;
float pop2=0;
float rs=0;
float rldub = 0;
float temp;

make_empty();

for(i=0; i<30; ++i)//replace 10
{
	scanf(" %c", &ch[i]);//operators and operands
	if(isdigit(ch[i]))
	{
		rldub = (float)ch[i] - (float)'0';		
        push(rldub);

	}
	else
	{
		if(ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '/' )
			{//pop two from the stack of numbers and calculate
			//push the result to same stack
			if(top > 1)
			{
		        pop1 = pop();
				pop2= pop();
			
				switch(ch[i]) 
				{
					case '+': push(pop1 + pop2);
								break;
					case '-': push(pop2 - pop1);
								break;
					case '*': push(pop1 * pop2);
								break;
					case '/': {
								if(pop1 != 0)
								{
									temp = pop2 / pop1;
									push(temp);
								}
								else
								{
									printf("Division by zero.\n");
									goto exit_loop;
								}
								break;
								}
					}
			}
			else
			{
				printf("Not enough operands in expression.\n");
				break;
			}
				
			}
		else if(ch[i] == '=')
		{
			if(top == 1)
			{
				pop1=pop();
				printf("Value of expression: %.2f\n", pop1);
				
			}
			else
				printf("Too much operands in expression\n");
			break;
		}
	}
}
exit_loop: ;
}

