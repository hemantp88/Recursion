#include <bits/stdc++.h>
using namespace std;

// #define int long long
bool kSum(vector<int> v, int i, int n, vector<int> ans, int sum, int s)
{
    if (i == n)
    {
        if (sum == s)
        {
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }
    if(kSum(v, i + 1, n, ans, sum, s)==true)return true;//not pic 
    ans.push_back(v[i]);
    if(kSum(v, i + 1, n, ans, sum + v[i], s)==true) return true;//pick
    return false;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v, ans;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int sum;
    cin>>sum;
    cout<<"Subsequences are : "<<endl; 
    if(kSum(v, 0, n, ans, 0, sum)==false)
    {
        cout<<"No such subsequence exist";
    }
    return 0;
}