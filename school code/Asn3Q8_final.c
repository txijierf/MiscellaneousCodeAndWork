#include <stdio.h>

void printVetices(int N, int G[][N]){
  printf("The graph has vertices:\n");
  int i;
  for(i=0;i<N;i++){
	printf("Vertex %d\n", i);
  }
}

void printEdges(int N, int G[][N]){
  printf("The graph has edges:\n");
  int i, j, total;

  for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	  if(G[i][j] == 1) /*if a 1 exists in the space, there is a connection*/
	    printf("[%d,%d]\n", i, j);/**/
        }
    }
}

void isThereAPath(int N, int G[][N], int v1, int v2){
if(G[v1][v2] == 1)//this is direct path only
	printf("Yes, there is a path between %d and %d.\n", v1, v2);
else
	printf("No, There is no path between %d and %d.\n", v1, v2);
}

#define N  5

int main(){

  int Graph[N][N] = {{0,1,0,0,1},{1,0,0,0,1},{0,0,0,1,0},{0,0,1,0,0},{1,1,0,0,0}};

  printVetices(N, Graph);
  printEdges(N, Graph);
  isThereAPath(N, Graph, 0, 1);
  isThereAPath(N, Graph, 0, 3);

  return 0;
}
