#include <stdio.h>


void printVetices(int N, int G){
printf("printVetices works.");
}

void printEdges(int G[][N]){
printf("printEdges works.");
}

void isThereAPath(int G[][N], int v1, int v2){
printf("isThereAPath works.");
}

#define N  5

int main(){

  int Graph[N][N] = { {0,1,0,0,1}, {1,0,0,0,1}, {0,0,0,1,0}, {0,0,1,0,0}, {1,1,0,0,0} };

  printVetices( N, Graph);
  printEdges( N, Graph);
  isThereAPath(N, Graph, 0, 1);
  isThereAPath(N, Graph, 0, 3);



  return 0;
}
