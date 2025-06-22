#include<iostream>
#include<vector>
#include<stack>
#include<list>
#include<unordered_map>
using namespace std;
class graphs{
public:
    unordered_map<int,list<int>> adj;

    void insert(int u,int v){
        adj[u].push_back(v);
    }
};
void dfs(int node , vector<bool> &visited,stack<int> &s,unordered_map<int,list<int>> &adj){
    visited[node]=true;

    for(auto it :adj[node]){
        if(!visited[it]){
            dfs(it,visited,s,adj);
        }
    }
    s.push(node);

}
int main(){
    graphs g;

    int n,m;
    cout<<"no of nodes"<<endl;
    cin>>n;

    cout<<"no of edges"<<endl;
    cin>>m;

    for(int i=0; i<m;i++){
        int u,v;
        cin>>u>>v;

        g.insert(u,v);
    }

    vector<bool> visited(n);
    stack<int> s;
    vector<int> ans;


    for(int i=1;i<n;i++){
        if(!visited[i]){
            dfs(i,visited,s,g.adj);

        }
    }

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    for(auto it :ans){
        cout<<it<<" ";
    }
    return 0;


}
