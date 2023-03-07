#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int low,int mid,int high )
{
    vector<int>temp;
    int l=low,r=mid+1;
    while(l<=mid&&r<=high) {
        if(arr[l]<=arr[r]){
            temp.push_back(arr[l]);
            l++;
        }
        else{    temp.push_back(arr[r]);
            r++;
        }
            } 
    while(l<=mid){
        temp.push_back(arr[l]);
        l++;
    }
    while(r<=high)    {
        temp.push_back(arr[r]);
        r++; }
    for(int i=low;i<=high;i++)    {
        arr[i]=temp[i-low];
    }


}
void ms(vector<int>&arr,int low,int high)
{
    if(low==high)return;
    int mid=(high+low)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);


}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    ms(arr,0,n-1);
    
}


int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    mergeSort(v,n);
    for(auto x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}