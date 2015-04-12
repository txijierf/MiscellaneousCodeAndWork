#include <stdio.h>

void printVetices(int N, int G[][N]){/*why is G[][N]*/
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

int returnEdge(int N, int G[][N], int row, int column){
if(G[row][column] == 1)
	return 1;
else
	return 0;
}

void isThereAPath(int N, int G[][N], int v1, int v2){
int i, j;
char tempPrintChar = 'n';
if(G[v1][v2] == 1)//if there is a direct connetion there is a path
	printf("Yes, there is a direct path between %d and %d.\n", v1, v2);
else//needs work; no direct path doesn't mean no path.
	{
		for(j=0;j<N;j++)
			{
				if(G[v1][j] == 1)
					{
						if(G[j][v2] == 1)
							{
								//printf("Yes, there is a path between %d and %d.", v1, v2);
								tempPrintChar = 'y';
								break;
							}
						else
							{
								for(i=0; i<N; i++)
									{
										if(G[j][i] == 1)
											{
												if(i == v2){
													tempPrintChar = 'y';
													
													break;}
													//printf("Yes, there is a path between %d and %d.", v1, v2);
												else{
													tempPrintChar = 'n';
													//printf("No, there is no path between %d and %d.", v1, v2);
													break;}
											}
									}
							}
					tempPrintChar = 'n';
					}
			}
		//tempPrintChar = 'n';
		//printf("No, There is no path between %d and %d.\n", v1, v2);
		if(tempPrintChar == 'y')
			printf("Yes, there is a path between %d and %d.\n", v1, v2);
		else if(tempPrintChar == 'n')
			printf("No, there is no path between %d and %d.\n", v1, v2);
	}
}

#define N  5

int main(){

  int Graph[N][N] = {{0,1,0,0,1},{1,0,0,0,1},{0,0,0,1,0},{0,0,1,0,0},{1,1,0,0,0}};

  printVetices(N, Graph);
  printEdges(N, Graph);
  isThereAPath(N, Graph, 0, 1);
  isThereAPath(N, Graph, 0, 3);
  isThereAPath(N, Graph, 1, 4);

  return 0;
}
