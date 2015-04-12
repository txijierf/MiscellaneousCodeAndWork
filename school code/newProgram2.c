#include <stdio.h>
#include <stdlib.h>

int main(void) {
int size, row, col, count = 1, countLimit, tempCount, point;
//int sizeArray[size][size];
//declare later

while(size == 0)
      {
        printf("Please enter an odd number for the size: ");
        scanf("%d", &size);
	if (size % 2 == 0)
	{
	  size = 0;
	}
      }

if(size % 2 != 0)
{
  int sizeArrays[size][size];
  int middle = size/2 + 1; //find the middle column
  //col = middle;
row = 1, col = 1;
/*int moveSpace = middle - 1;
/*moveSpace*/
/*while(moveSpace > 0)
{
printf("\t");
moveSpace--;
}*/

  countLimit = size * size;//upper limit of counting
  for(tempCount = 1; tempCount<countLimit; tempCount++)
  { //newarray[counter1][counter2] != '\0'
    for(row; row<=size; row++)
    {
      for(col; col<=size; col++)
      {
        sizeArrays[row][col]=count;
	if(count<countLimit)
	{
	  count++;
	}
	point = sizeArrays[row][col];
	printf("%d   ", point);
      }
      col=1;
      printf("\n");
      

    }

      
  }
printf("\n");
}

int magicSquareFunc(int sizeArray)
{
int row = 1, col = 1;

  while(point < countLimit)
  {
    for(row; row<=size; row++)
    {
      for(col; col<=size; col++)
      {
	//Flawed
      }
    }
  }
}
}
