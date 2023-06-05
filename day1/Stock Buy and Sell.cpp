#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int profit=0,mini=prices[0],x;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,prices[i]);
        x=prices[i]-mini;
        if(profit<x)
        {
            profit=x;
        }
    }
    return profit;
}