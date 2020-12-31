#include <bits/stdc++.h>>
using namespace std;
 int findOptimalCost(int freq[], int i, int j, int level)
{
    
    if (j < i)
        return 0;
 
    int optimalCost = INT_MAX;
 
    
    for (int k = i; k <= j; k++)
    {
        
        int leftOptimalCost = findOptimalCost(freq, i, k - 1, level + 1);
 
       
        int rightOptimalCost = findOptimalCost(freq, k + 1, j, level + 1);
 
        
        int cost = freq[k]*level + leftOptimalCost + rightOptimalCost;
 
        
        optimalCost = min (optimalCost, cost);
    }
 
    
    return optimalCost;
}
 
int main()
{
    int freq[] = { 25, 10, 20 };
    int n = sizeof(freq) / sizeof(freq[0]);
 
    cout << "The optimal cost of constructing BST is "
            << findOptimalCost(freq, 0, n - 1, 1);
 
    return 0;
}
