#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<set>
using namespace std;
class graph{
public:
    unordered_map<int,set<int>> adj;
    void insert(int u,int v){
        adj[u].insert(v);
        adj[v].insert(u);
    }
};

void bfs(vector<vector<int>> &newadj,unordered_map<int,bool> &visited,vector<int>& ans,int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int front= q.front();
        q.pop();

        ans.push_back(front);

        for(auto it: newadj[front]){
            if(!visited[it]){
                q.push(it);
                visited[it]=1;
            }
        }
    }
}
int main(){
    graph g;
    int n;
    cout<<"no of nodes"<<" ";
    cin>>n;
    int m;
    cout<<"no of edges"<<" ";
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }

    vector<vector<int>> newadj(n);
    for(int i=0;i<n;i++){
        for(auto it: g.adj[i]){
            newadj[i].push_back(it);
        }
    }

    vector<int> ans;

    unordered_map<int,bool> visited;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(newadj,visited,ans,i);
        }
    }
    for(auto it: ans){
        cout<<it<<" ";
    }

};