#include<bits/stdc++.h>
using namespace std;


int main()
{

 int const N=10;
 int e,v;
 cin>>e>>v;
 vector<int>adj[N];
 bool vis[N];
 
 for(int i=0;i<N;i++)
{
   vis[i]=0;
}
 int x,y;
 
 for(int i=0;i<e;i++)
 {
   cin>>x>>y;
   adj[x].push_back(y);
   adj[y].push_back(x);
 }
 stack<int>q;
 
 q.push(1);
 vis[1]=true;
 
 while(!q.empty())
 {
   int node=q.top();
   q.pop();
   cout<<node<<" ";
   
   vector<int>::iterator it;
   
   for(it=adj[node].begin();it!=adj[node].end();++it)
   {
      if(!vis[*it])
      {
        q.push(*it);
        vis[*it]=true;
      }
      
   }
 }
 return 0;
}
