#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void p(vector<int>&arr, vector<vector<int>>&ans,vector<int>&ds,vector<int>&in)
{
    if(ds.size()==arr.size())
    {
        ans.push_back(ds);
    }
    for(int i=0;i<arr.size();i++)
    {
        if(in[i]==0)
        {
            ds.push_back(arr[i]);
            in[i]=1;
            p(arr,ans,ds,in);
            ds.pop_back();
            in[i]=0;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<int>in(nums.size(),0);
        vector<vector<int>>ans;
        p(nums,ans,ds,in);
        return ans;
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
   
    return 0;
}