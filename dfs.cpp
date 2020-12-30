#include<bits/stdc++.h>
using namespace std;
#define V 6
void DFS(int graph[V][V],int start,int visited[V]){
  cout<<start<<" ";
  visited[start] = true; 
  for (int i = 0; i < V; i++) { 
  
    if (graph[start][i] == 1 && visited[i]!=1) { 
            DFS(graph,i, visited); 
        } 
    } 

}
int main() 
{ 
  
 int graph[V][V]={{0,1,1,0,0,0},
                   {0,0,0,1,0,0},
                   {0,0,0,0,0,0},
                   {0,0,0,0,1,1},
                   {0,1,1,0,0,1},
                   {0,0,0,0,0,0}};

	int visited[V]={0};

	cout << "Following is Breadth First Traversal "<<endl;
		
	DFS(graph,0,visited);

	return 0; 
} 
