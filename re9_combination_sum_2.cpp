// 40. Combination Sum II
// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.


#include<bits/stdc++.h>
using namespace std;

void f(vector<int>&arr,vector<vector<int>>&ans,vector<int>&v,int i,int n,int sum)
{
    if(sum==0)
    {
        ans.push_back(v);
        return;
    }
    for(int j=i;j<n;j++)
    {
        if(j>i&&arr[j]==arr[j-1])    continue;
        
        if(arr[j]>sum)break;
        v.push_back(arr[j]);
        f(arr,ans,v,j+1,n,sum-arr[j]);
        v.pop_back();


    }


    
    
}   
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     vector<vector<int>>ans;
     vector<int>v;
     int n=candidates.size();
     sort(candidates.begin(),candidates.end());
     f(candidates,ans,v,0,n,target); 
    // vector<vector<int>> a;
    // for(auto it :ans)
    // {
    //     a.push_back(it);
    // }
     return ans;
    }


int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    
    return 0;
}