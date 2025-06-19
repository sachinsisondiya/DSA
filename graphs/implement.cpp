#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph{
public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v, bool direction){
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printf(){
        for(auto i: adj){
            cout<<i.first<<"->";

            for(auto j:i.second){
                cout<<j<<" ";

            }
            cout<<endl;
        }
    }
};
int main(){
    graph g;

    cout<<"enter the no of nodes"<<" ";
    int n;
    cin>>n;

    cout<<"enter the edges"<<" ";
    int e;
    cin>>e;

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printf();


}