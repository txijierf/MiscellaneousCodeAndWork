#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
} node1, node2;

int main()
{
node1.data = 5;
node1.next = node2.data;
node2.data = 7;
node2.next = NULL;

printf("node 1: %d\t node1.next: %d\t node2: %d.", node1.data, node1.next, node2.data);
}

