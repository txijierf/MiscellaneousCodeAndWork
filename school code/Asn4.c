#include <stdio.h>
#include <stdlib.h>

/* definition of a bucket */
typedef struct {
	int *elements;
	int tag;
} Bucket;

/* definition of a pennant */
typedef struct pennant {
	int height;
	Bucket *bucket;
	struct pennant *left;
	struct pennant *right;
} Pennant;

/* definition of a bag */
typedef struct {
	Pennant* *elements;
	Pennant* pennant;
	int tag;
} Bag;

Bucket* NewBucket()
{

}

void FreeBucket(Bucket* pBucket)
{

}

void PrintBucket(Bucket* pBucket);
{

}

Pennant* NewPennant()
{

}

void FreePennant(Pennant* pPennant)
{

}

void PrintPennant(Pennant* pPennant);

int main()
{

}

