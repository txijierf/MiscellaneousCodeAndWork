#include <stdio.h>
#include <stdlib.h>
#include "bag.h"
#include "pennant.h"
#include "bucket.h"
#include "macros.h"

int main(void)
{
Bag* newBag;//creates a new bag
int i;
for(i=0;i<newBag->tag;i++)
	{
		//insert integers into bag
		newBag->elements[i] = i;
		//print bag
		printf("%d", newBag->elements[i]);
	}
free(newBag);//free all memory
}

