#include <bits/stdc++.h>
using namespace std;

// #define int long long
void kSum(vector<int> v, int i, int n, vector<int> ans, int sum, int s)
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
        }
        return;
    }
    kSum(v, i + 1, n, ans, sum, s);//not pic 
    ans.push_back(v[i]);
    kSum(v, i + 1, n, ans, sum + v[i], s);//pick
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
    kSum(v, 0, n, ans, 0, 2);

    return 0;
}