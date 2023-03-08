// Given an integer array nums that may contain duplicates, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 
 #include<bits/stdc++.h>
 using namespace std;
 
 void f(vector<int>&arr,vector<vector<int>>&ans,int ind,vector<int>&ds)
{
    ans.push_back(ds);
    for(int i=ind;i<arr.size();i++)
    {
        if(i!=ind && arr[i]==arr[i-1])
        {
            continue;
        }
        ds.push_back(arr[i]);
        f(arr,ans,i+1,ds);
        ds.pop_back();
    }

}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        f(nums,ans,0,ds);
        return ans;
}


 int32_t main()
 {
     cin.tie(0)->sync_with_stdio(false);
  
     return 0;
 }