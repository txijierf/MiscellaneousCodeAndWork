#include <stdio.h>
#include <stdlib.h>

int main(void) {
int size, row, col, count = 1, countLimit, point;

/*Ask user to input odd integer*/
  while(size == 0)
  {
    printf("Please enter an odd number for the size: ");
    scanf("%d", &size);
    if (size % 2 == 0)
    {
      size = 0;
    }
  }/*Repeatedly asked until appropriate answer is given*/

/*If appropriate answer is given*/
  if(size % 2 != 0)
  {
    int sizeArrays[size][size];/*create an empty array of proper size*/
    int middle = size/2 + 1; /*Find the middle column*/
    row = 1, col = 1;/*Set the rows and columns to one*/
    //row = 1, col = 1;
    countLimit = size * size;/*Find the Maximum number*/
    while(row<=size)/*While the rows aren't too high*/
    {
      for(row; row<=size; row++)
      {
        for(col; col<=size; col++)
        {
	  //sizeArrays[row][col]=count;
	  sizeArrays[row][col]=0;
	  if(row == 1)
	  {
	    sizeArrays[row][middle]=1;
	  }
	  point = sizeArrays[row][col];
	  printf("%d\t", point);
	  //count++;
        }
	col=1;
	printf("\n");
      }
      printf("\n");
    }
//Fill Array of Zeroes with magic numbers
	row = 1;
	while(count <= countLimit)
	{
	  row--;
	  if(row <= 0)
	  {
	    row = size;
	  }

	  for(col=1; col<=size; col++)
            {
	      sizeArrays[row][col]=count;
	      //sizeArrays[row][col]=0;
	      count++;
	      point = sizeArrays[row][col];
	      printf("%d\t", point);
            }
	}
  //int tempTestVar = sizeArrays[row-1][2];//Error entry in array
  //printf("This character has error starting with size 7: %d\n", tempTestVar);
  }
}
