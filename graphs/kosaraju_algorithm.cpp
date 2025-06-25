#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
class graphs{
public:
    unordered_map<int,list<int>> adj;
    void insert(int u,int v){
        adj[u].push_back(v);
    }
};
void topo(int node,unordered_map<int,bool>& visited, unordered_map<int,list<int>> &adj ,stack<int> &st){
    visited[node]=true;

    for(auto it:adj[node]){
        if(!visited[it]){
            topo(it,visited,adj,st);
        }

    }
    st.push(node);
}
void dfs(int node, unordered_map<int,bool> &visited, unordered_map<int,list<int>>& tran){
    visited[node]=true;
    for(auto it:tran[node]){
        if(!visited[it]){
            dfs(it,visited,tran);
        }
    }
}
int main(){
    graphs g;
    int n,m;
    cout<<"enter the no nodes"<<endl;
    cin>>n;
    cout<<"enter the no edges"<<endl;
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }

    unordered_map<int,bool> visited;
    stack<int> st;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            topo(i,visited,g.adj,st);
        }
    }
    unordered_map<int,list<int>> tran;
    for(int i=0;i<n;i++){
        visited[i]=false;
        for(auto it:g.adj[i]){
            tran[it].push_back(i);

        }
    }
    int cnt=0;
   while(!st.empty()){
       int top=st.top();
       st.pop();
       if(!visited[top]){
           cnt++;
           dfs(top,visited,tran);
       }

   }
   cout<<endl;
   cout<<cnt;










}