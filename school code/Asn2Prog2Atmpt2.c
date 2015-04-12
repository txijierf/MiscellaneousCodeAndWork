#include <stdio.h>
#include <stdlib.h>

int main(void) {
int size = 0, row, col, rr, cc, printVar = 0;
int magicArray[99][99], i = 1;
while(size == 0 || size > 99 || size < 1)
{
	printf("Please enter an odd number for the size: ");
	scanf("%d", &size);
   	if (size % 2 == 0)
   	{
     	size = 0;
    }
}/*Repeatedly asked until appropriate answer is given*/

for(row=0; row<99; row++)
	for(col=0; col<99; col++)
		magicArray[col][row] = 0;

row = 0;
col = size / 2;

for(i = 1; i <= size * size; i++)
	{
		if(i != 1)
		{
			rr = row;
			cc = col;
			row -= 1;
			if(row<0)
				{
					row += size;
				}

			col += 1;
		
			if (col >= size)
				{
					col -= size;
				}

			if(magicArray[col][row]!=0)
				{
					row=rr;
					col=cc;
					row+=1;
					if(row>=size)
						row-=size;
				}
		}

	magicArray[col][row] = i;
}

for(row=0; row<size; row++)
	{
  	for(col=0; col<size; col++)
    	{
      		printf("%4d ", magicArray[col][row]);
    	}
  		printf("\n");
	}
}
