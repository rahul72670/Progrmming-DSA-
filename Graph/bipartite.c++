#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int col[100001];
bool dfs(int v,int c){
      vis[v]=1;
      col[v]=c;
     for(int child:ar[v]){
         if(!vis[child])
             if(!dfs(child,c^1))
                 return false;
         else if(col[v]==col[child])
             return false;  
    } 
   return true;
}


int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    bool res,flag=0;
	for (int i = 1; i <= n; i++){
        if (!vis[i]){
           res= dfs(i,0);
           if(res==0) 
           flag=0;
        }
    }
     if(flag==0)
    cout<<"bipartite"<<endl;
    else
    cout<<"not bipartite"<<endl;
	return 0;
}