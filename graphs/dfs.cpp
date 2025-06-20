#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;
class graph{
public:

    unordered_map<int,set<int>> adj;
    void insert(int u,int v){
        adj[u].insert(v);
        adj[v].insert(u);
    }

};
void dfs(int node, unordered_map<int,bool> &visited,unordered_map<int,set<int>> &adj,vector<int>& component){
    component.push_back(node);

    visited[node]=1;

    for(auto it: adj[node]){
        if(!visited[it]){
            dfs(it,visited,adj,component);
        }
    }
}
int main(){
    graph g;
    int n;
    int m;
    cout<<"enter the no of nodes"<<" ";
    cin>>n;
    cout<<"enter the no of edges"<<" ";
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }

    unordered_map<int,bool> visited;
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i,visited,g.adj,component);
            ans.push_back(component);

        }
    }
    cout<<ans.size()<<endl;

    for(auto it: ans){

        for(auto j:it){
            cout<<j<<" ";

        }
        cout<<endl;
    }

}