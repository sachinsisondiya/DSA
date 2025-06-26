#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;
class graph{
public:
    unordered_map<int,vector<pair<int,int>>> adj;
    void insert(int u,int v,int weight){
        adj[u].push_back({v,weight});
    }

};
int main(){
    graph g;
    int n,m;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    cout<<"enter the no edges"<<endl;
    cin>>m;
    cout<<endl;

    int src;
    cout<<"enter the source"<<endl;
    cin>>src;


    for(int i=0;i<m;i++){
        int u,v,dist;
        cin>>u>>v>>dist;
        g.insert(u,v,dist);
    }

    vector<int> dist(n+1,INT_MAX);
    dist[src]=0;

    for(int i=1;i<=n-1;i++){


        for(int u=1;u<=n;u++){

            for(int j=0;j<g.adj[u].size();j++){
                int v= g.adj[u][j].first;
                int w= g.adj[u][j].second;

                if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                }

            }

        }
    }
    bool flag=false;
    for(int u=1;u<=n;u++){

        for(int j=0;j<g.adj[u].size();j++){
            int v= g.adj[u][j].first;
            int w= g.adj[u][j].second;

            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                flag=true;
            }

        }

    }

    if(flag){
        cout<<"cycled is present";
    }
    else{
        for(auto it: dist){
            if(it==INT_MAX){
                continue;
            }
            cout<<it<<" ";
        }
    }




}