#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node{
	int data;
	struct node *next;
};

int main(void)
{
	struct node a,b,c,d;
	a.next = &b;
	a.data = b.data = c.data = d.data = 0;
	b.next = &c;
	c.next = &d;
	d.next = NULL;

char entrScan;
printf("Press i to insert, p to pop, or q to quit.\n");
	scanf("%c", &entrScan);

switch(entrScan)
{
	case 'i':	printf("code for i goes here.\n");
					break;
	case 'p':	printf("code for p goes here.\n");
					if(a.data == 0)
					{
						printf("Stack is empty. Please try again.\n");
						printf("Press i to insert or q to quit.\n");
						/*while(entrScan == 'p' || (entrScan != 'q' && entrScan != 'i'))
						{
							scanf("%c", &entrScan); //needs to refer back to switch
							
						}*/
					}
					break;
	case 'q':	printf("code for q goes here.\n");
					break;
	default:  printf("An error has occured. Please run program again.\n");
					  break;
}

if(a.data == 0)
{
	
}
/*
	a.data = 1;
	a.next->data = 2;*/
/* b.data =2 */
/*	a.next->next->data = 3;
/* c.data = 3 */
/*	a.next->next->next->data = 4;
/* d.data = 4*/
/*	d.next = (struct node *)
	malloc(sizeof(struct node));*/
}
