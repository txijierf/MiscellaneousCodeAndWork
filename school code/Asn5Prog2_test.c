#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1,1,1,1,1,1,0}, {0,1,1,0,0,0,0,}, {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1}, {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0}, {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}};

char digits[3][MAX_DIGITS*4];

int main(void)
{
char tempchar
	void process_digit(int digit, int position);
    void process_digit_n(int digit, int position);
	//void print_digits_array(void);
	int num;

	printf("Enter a number: ");
			
	scanf("%d", &num);
	printf("%d", num);

	int test[] ={9,8,7,6,5,4,3,1,0};
	//char digits[3][MAX_DIGITS*4];
	//for(int i=0; i<sizeof(test)/sizeof(test[0]); i++)
	
	for(int ii=0; ii<sizeof(test)/sizeof(test[0]); ii++)
	{
		process_digit(num[ii], ii);
	}


	//printf("before process_digit\n");
	//process_digit(9,0);

	/*for(int d=0; d<3; d++)
	{
		for(int c=0; c<40; c++)
		{
			printf("%c ", digits[d][c]);
		}
		printf("\n");
	}*/
	
	process_digit_n(0, 1);
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

void process_digit_n(int digit, int position)
{
   for(int row=0;row<3;row++)
	{ 
		for(int col=0;col<12;col++)   
			{     
		    //digits[row][position*4+col] =SSDdefault[row][col];
			printf("%c ", digits[row][col]);
			}
		printf("\n");
	}  

}

void print_digits_array(void)
{
/*display the rows of the digits array,
each on a single line, producing the output*/

	for(int row=0;row<3;row++)
	{ 
		for(int col=0;col<36;col++)   
			{     
		    //digits[row][position*4+col] =SSDdefault[row][col];
			printf("%c ", digits[row][col]);
			}
		printf("\n");
	}  


}

/* _
  |_|
  |_|

*/

