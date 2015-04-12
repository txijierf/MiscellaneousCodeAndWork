#include <stdio.h>

const int MAX=10;
// INPUT: ’bt’, a binary tree.
// ’node’, a node in the tree.
// OUTPUT: the index of given value in the tree.
int getIndex(int *bt, int node){
	int i;
	for(i=0;i<MAX;i++)
	{
		if(bt[i] == node){
			return i+1; //i...max
		}
			//printf("i = %d", i);
	}
	
	return 0;
}

// INPUT: ’bt’, a binary tree.
// ’node’, a node in the tree.
// OUPUT: print the parent node of ’node’.
void printParentNode (int *bt, int node){
if(bt[getIndex(bt, node)/2 - 1] == 0)
	printf("Error. Node is the root. No Parent Found.\n");
else
	printf("The parent of node %d is %d.\n", node , bt[getIndex(bt, node)/2 - 1]);
}

// INPUT: ’bt’, a binary tree
// ’node’, a node in the tree.
// OUPUT: print the left child of ’node’
void printLeftChildNode (int *bt, int node){
int x = getIndex(bt, node)*2;
if (x <= MAX)
	printf("The left child of node %d is %d.\n", node, bt[x]);
else
	printf("There is no left child for node %d.\n", node);
}

int min(a, b)
{
	if(a > b) return a;
		return b;
}

// INPUT: ’bt’, a binary tree
// ’node’, a node in the tree.
// OUPUT: print the right child of ’node’
void printRightChildNode (int *bt, int node){
int ndx = getIndex(bt, node)*2+1;
if ( ndx <= MAX)
	printf("The right child of node %d is %d\n", node, bt[ndx-1]);
else
	printf("There is no right child for node %d.\n", node);
}


// INPUT: ’bt’, a binary tree
// ’node1’, a node in the tree.
// ’node2’, a node in the tree.
// OUPUT: print the nearest ancestor of ’node1’ and ’node2’.
void printNearestCommonAncestor(int *bt, int node1, int node2){
int i = 0, j = 0, tempNDX, trigger = 0, node2b = node2, count = 1;
int smallerNode = min(node1, node2);
tempNDX = bt[getIndex(bt, smallerNode)/2 - 1];
int tempNode;
if(node1 == node2)
	printf("The common ancestor of node %d and node %d is %d.\n", node1, node2, tempNDX);

if(node1 > node2)
{
while (bt[getIndex(bt, node1)/2 -1] != 0)
	{
		tempNode = bt[getIndex(bt, node1)/2 -1];
		if(tempNode == tempNDX)
		{
			printf("The common ancestor of node %d and node %d is %d.\n", node1, node2, tempNDX);
			break;
		}
		if(tempNode > tempNDX)
		{
			tempNDX = bt[getIndex(bt, node1)/2 -1];
			printf("The common ancestor of node %d and node %d is %d.\n", node1, node2, tempNDX);
			break;
		}
	}
}
/*while (bt[getIndex(bt, smallerNode)/2 - 1] != 0)
	{
		
	}*/
}

void printNearestCommonAncestor2(int *bt, int node1, int node2){
//tempNDX1 = bt[getIndex(bt, node1)/2 - 1];

/*	for(i = 0; i<MAX; i++)//node1
		{
			for(j=0; i<MAX; j++)//node2
				{
					if (tempNDX == bt[getIndex(bt, node2)/2 - 1])
					{
						trigger = 1;
						break;
					}
						tempNDX == bt[getIndex(bt, tempNDX)/2 - 1];
				}
					if(trigger == 1){
						printf("tempNDX %d", tempNDX);
						break;}

					tempNDX = bt[getIndex(bt, tempNDX)/2 - 1];
		}
printf("tempNDX %d", tempNDX);*/

}

int main(){
	int binaryTree[11] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};
	int index;
		printParentNode(binaryTree, 16);
		printParentNode(binaryTree, 3);
		printLeftChildNode(binaryTree, 7);
		printLeftChildNode(binaryTree, 9);
		printRightChildNode(binaryTree, 7);
		printRightChildNode(binaryTree, 10);
		printNearestCommonAncestor(binaryTree, 7, 7);
		printNearestCommonAncestor(binaryTree, 8, 1);
		printNearestCommonAncestor(binaryTree, 8, 9);
	return 0;
}
