#include <stdio.h>

const int MAX=10;
// INPUT: ’bt’, a binary tree.
// ’node’, a node in the tree.
// OUTPUT: the index of given value in the tree.
int getIndex(int *bt, int node){
	int i;
	for(i=0;i<MAX;i++)
		if(bt[i] == node) return i+1; //1...max
	return 0;
}

// INPUT: ’bt’, a binary tree.
// ’node’, a node in the tree.
// OUPUT: print the parent node of ’node’.
void printParentNode (int *bt, int node){
if(bt[getIndex(bt, node)/2 - 1] == 0)
	printf("Node %d is the root and has no parent.", node);
else
	printf("The parent of node %d is %d.\n", node , bt[getIndex(bt, node)/2 - 1]);
}

// INPUT: ’bt’, a binary tree
// ’node’, a node in the tree.
// OUPUT: print the left child of ’node’
void printLeftChildNode (int *bt, int node){
	int x = getIndex(bt, node)*2;
	if (x <= MAX)
		printf("The left child of node %d is %d.\n", node, bt[x - 1]);
	else
		printf("There is no left child for node %d.\n", node);
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
	int i = 0, j = 0, tempNDX, trigger = 0;
	int largerNode;
	int smallerNode = min(node1, node2);//find the higher node
		tempNDX = bt[getIndex(bt, smallerNode)/2 - 1];//find parent of higher node
	largerNode = node1 + node2 - smallerNode;
	int tempNDX2 = bt[getIndex(bt, largerNode)/2 - 1];//find parent of lower node
		printf("tempNDX is: %d\t and tempNDX2 is: %d\n", tempNDX, tempNDX2);
if(tempNDX == tempNDX2)//if they are equal, then print
  {
		printf("The nearest Common Ancestor of node1 %d and node2 %d is %d\n", node1, node2, tempNDX);
  }
}

void printNearestCommonAncestor3(int *bt, int node1, int node2){
int a = getIndex(bt, node1);
int b = getIndex(bt, node2);
int final;
//printf("a = %d; b = %d;\n", a, b);
int i;
//for(i=0;i<5;i++)
if(a == b)
{
	printf("They are the same node of %d. All ancestors are common.\n", bt[a-1]);
}
else
{
	while(a != b)
		{
			if(a < b)
				b = b/2;
			else
				a = a/2;
		}
	a = bt[a - 1];
	b = bt[b - 1];
	if(a == b)
		final = b = a;
	printf("The nearest common ancestor is: %d.\n", final);
}
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

int min(a, b)
{
	if(a > b) return a;
		return b;
}
/*int findLCA(int *root, int p, int q) {
  // no root no LCA.
  if(!root) {
          return NULL;
  }

  // if either p or q are the root then root is LCA.
  if(root->data==p || root->data==q) {
          return root;
  } else {
         // get LCA of p and q in left subtree
         treeNodePtr l=findLCA(root->left , p , q);

         // get LCA of p and q in right subtree
         treeNodePtr r=findLCA(root->right , p , q);

         // if one of p or q is in leftsubtree and other is in right
         // then root is the LCA
         if(l && r) {
                 return root;
         }
         // else if l is not null, l is LCA
         else if(l) {
                 return l;
         } else {
                 return r;
         }
    }
}*/

int main(){
	int binaryTree[11] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};
	int index;
		printParentNode(binaryTree, 16);
		printParentNode(binaryTree, 3);
		printLeftChildNode(binaryTree, 7);
		printLeftChildNode(binaryTree, 9);
		printRightChildNode(binaryTree, 7);
		printRightChildNode(binaryTree, 10);
		printNearestCommonAncestor3(binaryTree, 7, 7);
		printNearestCommonAncestor3(binaryTree, 8, 1);
		printNearestCommonAncestor3(binaryTree, 8, 9);
	return 0;
}
