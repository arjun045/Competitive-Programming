#include <stdio.h>
#include <limits.h>
#include<stdlib.h>


/* This function returns the index of the vertex which is not included 
in the shortest path right now and has the smallest distance from the source.

*/
int minimumDist(int dist[], int vertexIncluded[],int V)
{
     int min = INT_MAX, min_index;
     int v =0;
     for (v = 0; v < V; v++)
       if (vertexIncluded[v] == 0 && dist[v] <= min)
       {
               min = dist[v];
               min_index = v;
       }

     return min_index;
}

/** This function prints the shortest distance of each vertex from the source 
separated by spaces */
void printSolution(int dist[], int V)
{
 int i=0;
 for ( i = 0; i < V-1; i++)
    printf("%d ",dist[i]);
    printf("%d",dist[V-1]);
}

/** This function computes the shortest distance from the src.*/
void SSSP(int **graph, int src,int V)
{
    /** dist is the output array. dist[i] will hold the shortest distance from src to i. */
    int dist[V];
            
    /** vetexIncluded[i] will be 1 if vertex i is included in shortest path tree or shortest distance from src to i is finalized */

      int  vertexIncluded[V];

      /** You are supposed to write your code from here **/

	

}
// Following code will be appended to this code. Please do not uncomment it and do not write main. 
// driver program to test above function
int main()
{
    int V,E;
    int **graph;
    // The vertices are numbered from 0 to V-1
    scanf("%d %d",&V,&E);
    graph = (int **)malloc(sizeof(int *)*V);
    int i=0;
    for(i=0;i<V;i++)
    graph[i] = (int *)malloc(sizeof(int)*V);
    
    for(i=0;i<E;i++)
    {
        int s,d,w;
        scanf("%d%d%d",&s,&d,&w);
        graph[s][d] = w;
        graph[d][s] = w;


    }
  
    SSSP(graph, 0,V);

  return 0;
}

