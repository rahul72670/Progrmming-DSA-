#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int grid(int m,int n ){
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        if(i==0||j==0)
        dp[i][j]= 1;
        else dp[i][j]=dp[i-1][j]+dp[i][j-1];
    }
    return dp[m-1][n-1];
}
int main(){
  int n,m;
  cin>>n>>m;
memset(dp,-1,sizeof(dp));
  cout<<grid(m,n);
    return 0;
}