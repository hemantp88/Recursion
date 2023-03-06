#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}



int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int arr[] ={1,2,3,4,2};
    reverse(arr,0,4);
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}