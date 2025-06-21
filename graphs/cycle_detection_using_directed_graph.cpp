#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;
class graph{
public:
    unordered_map<int,list<int>> adj;
    void insert(int u,int v){
        adj[u].push_back(v);
    }
};
bool isCycle(int node,unordered_map<int,bool> &visited,unordered_map<int,bool>
        &dfsvisited,unordered_map<int,list<int>>& adj){

    visited[node]=true;
    dfsvisited[node]=true;

    for(auto it: adj[node]){
        if(!visited[it]){
            bool cyclic=isCycle(it,visited,dfsvisited,adj);
            if(cyclic){
                return true;
            }
        }
        else if(dfsvisited[it]){
            return true;
        }

    }
    dfsvisited[node]=false;
    return false;

}
int main(){
    graph g;
    int n;
    cout<<"enter the no of nodes and no of edges"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }

    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;
    bool cycle=false;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(isCycle(i,visited,dfsvisited,g.adj)){
                cycle=true;
                break;
            }
        }
    }
    if(cycle){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is absent"<<endl;
    }


}