#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

void f(int col,vector<string>&board,vector<vector<string>>&ans,int n,vector<int>&left,vector<int>&lower,vector<int>&upper)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(left[row]==0 && lower[row+col]==0 && upper[(n-1)+(col-row)]==0)
        {
            board[row][col]='Q';
            left[row]=1;
            lower[row+col]=1;
            upper[(n-1)+(col-row)]=1;
            f(col+1,board,ans,n,left,lower,upper);
            board[row][col]='.';
            left[row]=0;
            lower[row+col]=0;
            upper[(n-1)+(col-row)]=0;
        }
    }

}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        string str(n,'.');
        vector<string>board(n,str);  
        vector<int>left(n,0),lower(2*n-1,0),upper(2*n-1,0);
        f(0,board,ans,n,left,lower,upper);
        return ans;
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
   
    return 0;
}