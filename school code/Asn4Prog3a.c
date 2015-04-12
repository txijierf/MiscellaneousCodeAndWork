#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
char randWalk[10][10];
char alphaBet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int row=0, col=0, i, j, zero=0, directVal;

row = 0; col=0; i = 0; zero = 0;

for(row=0; row<10; row++)
	{
		for(col=0; col<10; col++)
			{
				randWalk[col][row] = '.';
			}
		col=0;
		printf("\n");
	}

directVal = randomNum();
//printf("%d\n", directVal);
i=0; col = 0; row = 0, cc, rr;
boolean success = false;
for(i=0; i<26; i++)
	{
		if(i!=0)
			{
				directVal = randomNum();
				switch(directVal) {
						case 0: if(col<9)
                                 { 
                                     if(randWalk[col+1][row] == '.')
									 { 
                                        col+=1;
                                        randWalk[col][row] = alphaBet[i];
										sucess = true;
                                      }	
							  	}
                        /*case 0: if(col<9){
									cc = col;
									col+=1;}  */         		
								break;
						case 1: if(col>0)
								{	//col-=1;
                                  if(randWalk[col-1][row] == '.')
									 { 
                                        col-=1;
                                        randWalk[col][row] = alphaBet[i];
										sucess = true;
                                      }	
								}
								break;
						case 2: if(row>0)
								{	//row-=1;
                                 if(randWalk[col][row-1] == '.')
									 { 
                                        row -=1;
                                        randWalk[col][row] = alphaBet[i];
										sucess = true;
                                      }	
								}
								break;
						case 3: if(row<9)
								{	//row+=1;
									if(randWalk[col][row+1] == '.')
									 { 
                                        row +=1;
                                        randWalk[col][row] = alphaBet[i];
										sucess = true;
                                      }	
								}
								break;
						default: printf("An error has occured. Please Try Again.");
								break;
					}
			}
			
           if(!sucess)   //Find available spot for the letter

			{
			  directVal = FindAvailableSpot(col,row,directVal,alphaBet[i]);
              switch(directVal) 
				{
					case 0: col +=1;
						break;
					case 1: col -=1; 
						break;
					case 2: row -=1;
						break;
					case 3: row +=1;
						break;	

				}
			}
			
			/*if(randWalk[col][row] == '.')			
				randWalk[col][row] = alphaBet[i];
			else
				{
					if(directVal == 0 || directVal == 1)
					{
						col = cc;
						directVal+=1;
					}
					else
					{
						row = rr;
						if(directVal == 3)
							directVal = 0;
						else
							directVal+=1;
					}
				}*/
	}
}

int randomNum(void) {
#define NUM_DIR 4

int randomNumb;
	srand( (unsigned)time ( NULL ) );
	randomNumb = rand() % NUM_DIR;
	return randomNumb;
}

int A_FindAvailableSpot(int col,int row)
{
boolean success = false; 
  
//dir =0
       if (col<9)
        { 
          if(randWalk[col+1][row1] == '.')
			 { 
               	return 0;
              }	
		}
//dir =1
       if(col>0)
			{	//col-=1;
              if(randWalk[col-1][row] == '.')
				 { 
                    return 1;
                  }	
			}
//dir =2  
 		if(row>0)
			{	//row-=1;
             if(randWalk[col][row-1] == '.')
				 { 
                    return 2;
                  }	
			}
  
         
//dir =3
		if(row<9)
			{	//row+=1;
				if(randWalk[col][row+1] == '.')
				 { 
                    return 3;
                  }	
			}
   if(!success)
     return -1;
}


int FindAvailableSpot(int col,int row,int dir,char letter, int count)
{
  
if (count>4)
    return -1;


switch(dir)
	{
  		case 0: //Means 0 position is not available, will try 1 position
  		 if(col>0) 
		{        
            //Try backward position			
			if(randWalk[col-1][row] == '.')
				 { 
				  col-=1;
				  randWalk[col][row] = letter;	
//                  
				return 1;
				  }	
			  else
				{
				  directVal = FindAvailableSpot(col,row,1,letter, count+=1);
				}
		}
        else
		{
        if(row==0) //Have to move to next row
           {             
				if(randWalk[col][row+1] == '.')
				 { 
				  row +=1;
				  randWalk[col][row] = letter;	
				  //   position is 3               
				  return 3;
				  }	
			    else
				{
				  return -1;
				}
         else
 			{
               if(randWalk[col][row-1] == '.')
				 { 
				  row-=1;
				  randWalk[col][row] = letter;	
//                  
				  return 2;
				  }	
			  else
				{
				  directVal = FindAvailableSpot(col,row,2,letter, count+=1);
				}
			}
			 
		}
           
case 1:

case 2:
case 3:
default:
break;

}
}

