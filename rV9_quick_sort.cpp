#include<bits/stdc++.h>
using namespace std;



int p(vector<int>&arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot&& i<=high)
        {
            i++;

        }
        while(arr[j]>pivot&& j>=low)
        {
            j--;

        }
        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}
void qs(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int part=p(arr,low,high);
        qs(arr,low,part-1);
        qs(arr,part+1,high);
    }
}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qs(arr,0,arr.size()-1);
    return arr;
}


int main(int argc, char const *argv[])
{
    vector<int>arr;
    int n;
    int a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    arr=quickSort(arr);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
 