#include<bits/stdc++.h>
using namespace std;


int subsequence(vector<int>v,int i,int n,int sum,int s)
{
    if(sum>s)
    return 0;//condition not done nd strictly done if array contains positive only (optimisise)
    if(i==n)
    {
        if(sum==s)
        {
            return 1;
        }
        return 0;
    }
    int l=subsequence(v,i+1,n,sum,s);
    int r= subsequence(v,i+1,n,sum,s+v[i]);
    return l+r;

}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int sum;
    cin>>sum;
    cout<<subsequence(v,0,n,sum,0);
    return 0;
}