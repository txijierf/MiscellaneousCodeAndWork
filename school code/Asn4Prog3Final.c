#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DIR 4

char randWalk[10][10];


int main(void) { 

char alphaBet[25] = {'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int row=0, col=0, i, j, zero=0, directVal;

row = 0; col=0; i = 0; zero = 0;

for(row=0; row<10; row++)
		for(col=0; col<10; col++)
				randWalk[col][row] = '.';


srand( (unsigned)time ( NULL ) );

randWalk[0][0] = 'A';

i=0; col = 0; row = 0;
int sucess = 1;

while(i<=24 && sucess == 1)
	{
		sucess=0;
		directVal = rand() % NUM_DIR;

		switch(directVal) {
				case 0: if(col<9)
                		if(randWalk[col+1][row] == '.')
                  	      randWalk[++col][row] = alphaBet[i++];
						break;
				case 1: if(col>0)
                          if(randWalk[col-1][row] == '.')
                            randWalk[--col][row] = alphaBet[i++];
						break;
				case 2: if(row>0)
                    		if(randWalk[col][row-1] == '.')
                                randWalk[col][--row] = alphaBet[i++];
						break;
				case 3: if(row<9)
							if(randWalk[col][row+1] == '.')
                                randWalk[col][++row] = alphaBet[i++];
						break;
				default: printf("An error has occured. Please Try Again.");
						break;
			}
			
			//check position 0 dir =0
			if (col<9) 
		    	if(randWalk[col+1][row] == '.')
		           	sucess=1;

			//check position 1 dir =1
			if(col>0)
				if(randWalk[col-1][row] == '.')
		        	sucess=1;

			// check position 2 dir =2  
			if(row>0)
	        	if(randWalk[col][row-1] == '.')
	                sucess=1;

			//check position 3 dir =3
			if(row<9)
				if(randWalk[col][row+1] == '.')
	                sucess=1;
		
	}

for(row=0; row<10; row++)
	{
		for(col=0; col<10; col++)
				printf("%2c", randWalk[col][row]);
		printf("\n");
	}  
}

