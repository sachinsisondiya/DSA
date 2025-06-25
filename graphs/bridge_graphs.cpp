#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;
class graphs{
public:
    unordered_map<int,list<int>> adj;

    void insert(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
};
void dfs(int node,vector<int> &disc, vector<int> &low, unordered_map<int,bool> &visited,
            int parent,int &timer,vector<vector<int>> &result, unordered_map<int,list<int>> &adj){
    visited[node]=true;
    disc[node]=low[node]=timer++;

    for(auto it:adj[node]){
        if(it ==parent){
            continue;
        } else if(!visited[it]){
            dfs(it,disc,low,visited,node,timer,result,adj);
            low[node]=min(low[node],low[it]);
            //check bridge is present or not
            if(low[it]>disc[node]){
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(it);
                result.push_back(ans);
            }
        }
        else{
            //backedge
            low[node]=min(low[node],disc[it]);
        }
    }

}
int main(){
    graphs g;
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
    vector<int> disc(n);
    vector<int> low(n);
    int timer=-1;
    unordered_map<int,bool> visited;
    int parent =-1;

    for(int i=0;i<n;i++){
        disc[i]=low[i]=-1;
    }
    vector<vector<int>> result;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,disc,low,visited,parent,timer ,result,g.adj);
        }
    }

    for(auto it: result){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;


}
