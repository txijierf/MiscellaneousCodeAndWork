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

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

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
int result = 0;
printf("Enter an reverse polish notation expression: ");


int i = 30;//replace 10
int pop1=0;
int pop2=0;
double rs=0;
int rlint = 0;
int temp;

make_empty();

for(i=0; i<30; ++i)//replace 10
{
	scanf(" %c", &ch[i]);//operators and operands
	//printf(" %c\n", ch[i]);
	if(isdigit(ch[i]))
	{
		printf(" %c\n", ch[i]);
		printf("int char %d\n", (int)ch[i]);
		rlint = (int)ch[i] - (int)'0';		
		printf("real int %d\n", rlint);
        push(rlint);
        /*if(is_empty)
			printf("empty");*/
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
				printf("pop1 %d\npop2 %d\n", pop1, pop2);
			
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
									printf("Division by zero.");
									break;
								}
								break;
								}
					}
				//printf("top %d\n", temp);
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

}

