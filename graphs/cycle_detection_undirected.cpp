#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
class graph{
public:
    unordered_map<int,list<int>> adj;

    void insert(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
};
bool isCyclic(int node, unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adj){
    unordered_map<int,int> parent;
    queue<int> q;
    q.push(node);
    visited[node]=true;
    parent[node]=-1;

    while(!q.empty()){
        int front =q.front();
        q.pop();

        for(auto it: adj[front]){
            if(visited[it] ==true && it != parent[front]){
                return true;
            }
            else if(!visited[it]){
                q.push(it);
                visited[it]=true;
                parent[it]=front;
            }
        }
    }
    return false;

}
int main(){
    graph g;
    int n,m;
    cout<<"enter the nodes"<<" ";
    cin>>n;
    cout<<"enter the edges"<<" ";
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }

    unordered_map<int,bool> visited;
    bool cycle=false;
    for(int i=0;i<n;i++){
        if(!visited[i]){
             if( isCyclic(i,visited,g.adj)){
                 cycle=true;
                 break;
             }

            }
        }
        if(cycle){
            cout<<"present";
        }
        else{
            cout<<"not present";
        }
    }
