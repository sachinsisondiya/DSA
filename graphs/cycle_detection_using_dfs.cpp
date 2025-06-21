#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;
class graph{
public:
    unordered_map<int,list<int>> adj;

    void insert(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

};
bool isPresent(int node,int parent,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj){
    visited[node]=true;

    for(auto it: adj[node]){
        if(!visited[it]){
            bool cycle=isPresent(it,node,visited,adj);
            if(cycle){
                return true;
            }
        }
        else if(it != parent){
            return true;
        }

    }
    return false;
}
int main(){
    graph g;
    int n,m;
    cout<<"enter the nodes"<<endl;
    cin>>n;
    cout<<"enter the edges"<<endl;
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }
    unordered_map<int,bool> visited;
    bool present=false;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(isPresent(i,-1,visited,g.adj)){
                present=true;
                break;
            }
        }
    }
    if(present){
        cout<<"cycle is present";
    }
    else{
        cout<<"cycle is not present";
    }



}