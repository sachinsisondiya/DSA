#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>
using namespace std;
class graph{
public:
    vector<vector<int>> adj;
    void insert(int u, int v, int weight){
        adj.push_back({u,v,weight});
    }
};
bool cmp(vector<int> &a,vector<int>& b){
    return a[2]<b[2];
}
void makeSet(vector<int> &parent,vector<int> &rank,int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int findParent(vector<int>& parent,int node){
    if (parent[node]==node){
        return node;
    }
    return parent[node]= findParent(parent,parent[node]);
}
void unionSet(int u,int v,vector<int> &parent,vector<int>& rank){
    u= findParent(parent,u);
    v= findParent(parent,v);

    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if( rank[v]<rank[u]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}
int main(){
    graph g;
    int n, m;
    cout<<"enter the node"<<" ";
    cin>>n;
    cout<<"enter the edges"<<" ";
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v,weight;
        cin>>u>>v>>weight;
        g.insert(u,v,weight);
    }
    sort(g.adj.begin(),g.adj.end(),cmp);

    vector<int> parent(n);
    vector<int> rank(n);
    makeSet(parent,rank,n);
    int minWeight=0;

    for(int i=0;i<n;i++){
        int u= findParent(parent,g.adj[i][0]);
        int v= findParent(parent,g.adj[i][1]);
        int wt=g.adj[i][2];

        if(u!=v){
            minWeight+=wt;
            unionSet(u,v,parent,rank);
        }

    }

    cout<<minWeight;





}
