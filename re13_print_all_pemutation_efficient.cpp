#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void p(vector<int>&arr, vector<vector<int>>&ans,int ind,int n)
{
    if(ind==n)
    {
        ans.push_back(arr);
        return ;
    }
    for(int i=ind;i<n;i++)
    {
        swap(arr[ind],arr[i]);
        p(arr,ans,ind+1,n);
        swap(arr[ind],arr[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        p(nums,ans,0,n);
        return ans;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
   
    return 0;
}