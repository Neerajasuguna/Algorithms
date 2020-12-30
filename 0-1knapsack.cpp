#include <bits/stdc++.h>
using namespace std;
int knapSack(int wt[], int pft[], int W, int N) 
{ 
  
    
    int i, j; 
    int dp[N + 1][W + 1]; 
for(int i=0; i<=W; i++)
   {
       dp[0][i] = 0;
   }
   
   for(int i=0; i<=N; i++)
   {
       dp[i][0] = 0;
   }
  
   for(int i=1; i<=N; i++){
        for(int j=1; j<=W; i++){
               if(wt[i-1]>j)
               dp[i][j]=dp[i-1][j];
               else
                dp[i][j]=max(dp[i-1][j],pft[i-1]+dp[i-1][j-wt[i-1]]);
        }
   }
   return dp[N][W];
   }
               
int main() {
	
int pft[] = { 10, 40, 30, 50 }; 
int wt[] = { 5, 4, 6, 3 }; 
int W = 10; 
int N = 4;
cout<<knapSack(wt,pft,W,N);
	

}
