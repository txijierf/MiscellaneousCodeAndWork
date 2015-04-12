#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h> /* C99 only */
#include <ctype.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1,1,1,1,1,1,0}, {0,1,1,0,0,0,0,}, {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1}, {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0}, {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}};

char digits[3][MAX_DIGITS*4];

int main(void)
{
	char num[20];
    int tempCount=0, rlint;
	void process_digit(int digit, int position);
    void print_digits_array(int digit);
	//void print_digits_array(void);

	printf("Enter a number: ");
	scanf("%s", num);

	for(int s=0;s<sizeof(num)/sizeof(num[0]);s++)	
	{
	   printf("%c\n", num[s]);

		if(isdigit(num[s]))
			{
				rlint = (int)num[s] - (int)'0';
				tempCount+=1;
			}

	}

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
	
	for(int ii=0; ii<sizeof(newArray)/sizeof(newArray[0]); ii++)
	{
	   process_digit(newArray[ii], ii);
	}

	
	print_digits_array(tempCount*4);
}


void clean_digits_array(void)
{
/*store blank characters into all elements of the digits array*/
}

void process_digit(int digit, int position)
{
/*Store the seven segment representation of numbers*/
/*set default char array*/
char SSDdefault[3][4]={{' ',' ','_',' '}, {' ','|','_','|'}, {' ','|','_','|'}};
/*find  segments based on the digit*/

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

int newcol=0;   
for(int row=0;row<3;row++)
	{ 
		for(int col=0;col<4;col++)   
			{     
		     newcol = col+position*4;
             digits[row][newcol] =SSDdefault[row][col];
			 //printf("%c ", digits[row][newcol]);
			}
        //printf("\n");
        
	}


}

void print_digits_array(int totalcol)
{
/*display the rows of the digits array,
each on a single line, producing the output*/
   for(int row=0;row<3;row++)
	{ 
		for(int col=0;col<totalcol;col++)   
			{     
		    //digits[row][position*4+col] =SSDdefault[row][col];
			printf("%c ", digits[row][col]);
			}
		printf("\n");
	}  

}




