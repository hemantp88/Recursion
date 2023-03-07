#include<bits/stdc++.h>
using namespace std;


// #define int long long
void subsequence(vector<int>v,int n,int i,vector<int>&ans )
{
    if(i==n)
    {
        for(auto x: ans)
        {
            cout<<x<< " ";
            
        }
        cout<<endl;
        return;
    }
    ans.push_back(v[i]);
    subsequence(v,n,i+1,ans);
    ans.pop_back();
    subsequence(v,n,i+1,ans);

}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    // int t=1;
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>ans;
    subsequence(v,n,0,ans);
    
    return 0;
}