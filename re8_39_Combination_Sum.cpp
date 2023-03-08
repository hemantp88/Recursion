// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the
// frequency
//  of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

#include <bits/stdc++.h>
using namespace std;


void f(vector<int>&arr,vector<vector<int>>&ans,vector<int>&v,int i,int n,int sum)
{
    if(i==n)
    {
        if(sum==0)
        {
            ans.push_back(v);
        }
        return;
    }
    if(arr[i]<=sum)
    {
        v.push_back(arr[i]);
        f(arr,ans,v,i,n,sum-arr[i]);
        v.pop_back();
    }
    f(arr,ans,v,i+1,n,sum);
    
}
 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int n = candidates.size();
        f(candidates,ans,v,0,n,target);   
        return ans;
    }



int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int target;
    cin >> target;
    vector<vector<int>> ans = combinationSum(v,  target);
    for (auto x : ans)
    {
        for (auto it : x)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}