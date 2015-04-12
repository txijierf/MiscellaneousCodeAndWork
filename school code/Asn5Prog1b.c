#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h> /* C99 only */
#include <ctype.h>
//gcc –E –std=c99 simple.c
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
double top = 0;
/* Stack in C */
//Empty the Stack
void make_empty(void)
{
	top = 0;
}
//check if the stack is empty
bool is_empty(void)
{
	return top == 0;
}

//check if the stack is full
bool is_full(void)
{
	return top == STACK_SIZE;
}


//see if the stack has overflown and throw an exception
void stack_overflow()
{
	printf("Expression is too complex.");
}

//see if the stack has underflown and throw an exception
void stack_underflow()
{
	printf("Not enough operands.");
}

//push the integer into the stack
void push(double i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

//pop the top item from the stack
int pop(void)
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
double result = 0;
printf("Enter an reverse polish notation expression: ");

int i = 30;//replace 10
double pop1=0;
double pop2=0;
double rs=0;
double rlint = 0;

make_empty();

for(i=0; i<30; ++i)//replace 10
{
	scanf(" %c", &ch[i]);//operators and operands
	if(isdigit(ch[i]))
	{
		rlint = (int)ch[i] - (int)'0';
        push(rlint);
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
									push(pop2 / pop1);
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
				printf("Value of expression: %d\n", pop());
			else
				printf("Too much operands in expression\n");
			break;
		}
	}
}
exit_loop: ;
}

