#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1,1,1,1,1,1,0},{0,1,1,0,0,0,0,},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1},{1,1,1,0,0,0,0}{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};

int main(void)
{
int num;
printf("Enter a number: ");
scanf("%d\n". &num);

}


void clean_digits_array(void)
{
/*store blank characters into all elements of the digits array*/
}

void process_digit(int digit, int position)
{
/*Store the seven segment representation of numbers*/
/*set default char array*/
char SSDdefault[3][4]={{" ","","_",""},{" ","|","_","|"},{" ","|","_","|"}}
/*find  segments based on the digit*/
int i, j;
for(i=0; i<7; i++)
{
	if(segments[digits][i] == 0)
	{
		SSDdefault[0][2]=" ";
	} 
}

}

void print_digits_array(void)
{
/*display the rows of the digits array,
each on a single line, producing the output*/
}

/* _
  |_|
  |_|

*/

