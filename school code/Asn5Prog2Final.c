#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h> /* C99 only */
#include <ctype.h>

#define MAX_DIGITS 10

//initial seven segment display to represent numbers
const int segments[10][7] = {{1,1,1,1,1,1,0}, {0,1,1,0,0,0,0,}, {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1}, {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0}, {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}};

//Array of digits with 3 rows and MAX_DIGITS * 4 columns
char digits[3][MAX_DIGITS*4];


int main(void)
{
	char num[20];//Stores user input as characters
    int tempCount=0, rlint;

	//declaration of the 3 other functions	
	void process_digit(int digit, int position);
    void print_digits_array(int digit);
	void clean_digits_array(void);

	//Call clean up array of the digits
	clean_digits_array();

	//Get user input	
	printf("Enter a number: ");
	scanf("%s", num);

	//processing input to get the digits from input string
	for(int s=0;s<sizeof(num)/sizeof(num[0]);s++)	
	{
	   //printf("%c\n", num[s]);

		if(isdigit(num[s]))
			{
				rlint = (int)num[s] - (int)'0';
				tempCount+=1;
			}

	}

	//define new array to store the useful integers input by the user
	int newArray[tempCount];
	int t=0;
	for(int b=0; b<20; b++)
	{
		if(isdigit(num[b]))
		{
			t+=1;
			newArray[t-1]=(int)num[b] - (int)'0';
		
		}
	}
	
	//loop the processing of the integers until all integers are processed
	for(int ii=0; ii<sizeof(newArray)/sizeof(newArray[0]); ii++)
	{
		//fill the digits array  
		process_digit(newArray[ii], ii);
	}

	//print out the digits array, where the total colums for the digits array is tempCount*4
	print_digits_array(tempCount*4);
}


void clean_digits_array(void)
{
/*store blank characters into all elements of the digits array*/
for(int i=0; i<3;i++)
{
	for(int j=0; j<MAX_DIGITS*4; j++)
	{
		digits[i][j] = ' ';
	}
}
}

void process_digit(int digit, int position)
{
/*Store the seven segment representation of numbers*/
/*set default char array*/
char SSDdefault[3][4]={{' ',' ','_',' '}, {' ','|','_','|'}, {' ','|','_','|'}};
/*find  segments based on the digit*/

//reset the char array based on the digit integer
for(int i=0; i<7; i++)
{
	switch(i)
    {
		case 0:
			 {
		       if(segments[digit][i] == 0)
			    {
				   SSDdefault[0][2] =' ';
			    } 
				break;
			}
		case 1:
			{
				if(segments[digit][i] == 0)
			    {
				   SSDdefault[1][3] =' ';
			    } 
				break;
			}
		case 2:
				{
					if(segments[digit][i] == 0)
					{
					   SSDdefault[2][3] =' ';
					} 
					break;
				}
		case 3:
				{
					if(segments[digit][i] == 0)
					{
					   SSDdefault[2][2] =' ';
					} 
					break;
				}
		case 4:
				{
					if(segments[digit][i] == 0)
					{
					   SSDdefault[2][1] =' ';
					} 
					break;
				}
		case 5:
				{
					if(segments[digit][i] == 0)
					{
					   SSDdefault[1][1] =' ';
					} 
					break;
				}
		case 6:
				{
					if(segments[digit][i] == 0)
					{
					   SSDdefault[1][2] =' ';
					} 
					break;
				}
	}		}

//Put the char array into the digits array
int newcol=0;   
for(int row=0;row<3;row++)
	{ 
		for(int col=0;col<4;col++)   
			{     
		     newcol = col+position*4;
             digits[row][newcol] =SSDdefault[row][col];
			}
        
	}


}

//Print out the digits array through the command lines
void print_digits_array(int totalcol)
{
/*display the rows of the digits array,
each on a single line, producing the output*/
   for(int row=0;row<3;row++)
	{ 
		for(int col=0;col<totalcol;col++)   
			{
			printf("%c ", digits[row][col]);
			}
		printf("\n");
	}  

}




