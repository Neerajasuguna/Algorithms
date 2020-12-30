

#include<bits/stdc++.h>
using namespace std;
#define V 6	 
void BFS(int graph[V][V]){
  int visited[V]={0};
  queue<int>q;
  q.push(0);
  visited[0]=1;
  int curr;
  while(!q.empty()){
    curr =q.front();
    cout<<curr<<" ";
    q.pop();
    for(int j=0;j<V;j++){
      if(visited[j]!=1&&graph[curr][j]==1){
        visited[j]=1;
        q.push(j);

      }
    }
  }

}
int main() 
{ 
  
 int graph[V][V]={{0,1,1,0,0,0},
                   {1,0,0,1,1,0},
                   {1,0,0,0,1,0},
                   {0,1,0,0,1,1},
                   {0,1,1,1,0,1},
                   {0,0,0,1,1,0}};
	

	cout << "Following is Breadth First Traversal "<<endl;
		
	BFS(graph);

	return 0; 
} 
