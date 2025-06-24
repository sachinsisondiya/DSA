#include<iostream>
#include<vector>
#include<list>
#include<limits>
#include<unordered_map>
using namespace std;
class graph{
public:
    unordered_map<int,list<pair<int,int>>> adj;

    void insert(int u,int v,int dist){
        adj[u].push_back(make_pair(v,dist));
        adj[v].push_back(make_pair(u,dist));
    }
};
int main(){
    graph g;
    int n,m;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    cout<<"enter the no of edges"<<endl;
    cin>>m;
    // make adjacency list
    for(int i=0;i<m;i++){
        int u,v,dist;
        cin>>u>>v>>dist;
        g.insert(u,v,dist);
    }
    // make ds required for this
    vector<int> key(n+1);
    vector<int> parent(n+1);
    vector<bool> mst(n+1);

    for(int i=1;i<=n;i++){
        key[i]=INT_MAX;
        parent[i]=-1;
        mst[i]=false;
    }
    key[1]=0;
    parent[1]=-1;

    for(int i=1;i<=n;i++){
        int mini= INT_MAX;
        int u=-1;
        for(int v=1;v<=n;v++){
            if(mst[v]==false && key[v]<mini){
                u=v;
                mini=key[v];
            }
        }
        if(u==-1) break;
        mst[u]=true;
        // check the adjecency

        for(auto it : g.adj[u]){
            int v=it.first;
            int w =it.second;
            if(mst[v]==false && w < key[v]){
                parent[v]=u;
                key[v]=w;
            }
        }


    }
    vector<pair<pair<int,int>,int>> result;

    for(int j=2;j<=n;j++){
        result.push_back({{parent[j],j},key[j]});
    }
    for(auto it :result ){
        cout<<it.first.first<<"-"<<it.first.second<<":"<<it.second;

    }





}