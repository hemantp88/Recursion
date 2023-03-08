#include<bits/stdc++.h>
using namespace std;
int p(vector<int>&arr,int low,int high)
{
    int i=low;
    int j=high;
    int pivot= arr[low];
    while(i<j)
    {
        while(arr[i]>=pivot && i<=high)
        {
            i++;
        }
        while(arr[j]< pivot && j>=low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int part = p(arr,low,high);
        qs(arr,low,part-1);
        qs(arr,part+1,high);
    }
}
void quickSort(vector<int>&arr,int n)
{
    qs(arr,0,n-1);
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    quickSort(v,n);
    for(auto x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}