
// Given a list arr of N integers, print sums of all subsets in it.
#include<bits/stdc++.h>
using namespace std;

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void sub(vector<int>&arr,vector<int>&ans,int i,int n,int sum)
{
    if(i==n)
    {
        ans.push_back(sum);
        return;
    }
   
    sub(arr,ans,i+1,n,sum+arr[i]);

    sub(arr,ans,i+1,n,sum);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        
        sub(arr,ans,0,N,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
   
    return 0;
}