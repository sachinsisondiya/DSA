#include<iostream>
#include<set>
#include<vector>
#include<unordered_map>
#include<list>
#include<limits>
using namespace std;
class graph{
public:
    unordered_map<int,list<pair<int,int>>>adj;
    void insert(int u,int v,int distance){
        adj[u].push_back(make_pair(v,distance));
        adj[v].push_back(make_pair(u,distance));
    }
};
int main(){
    graph g;
    int n,m;
    int src=0;
    cout<<"enter the no of node"<<" ";
    cin>>n;
    cout<<"enter the edges"<<" ";
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v,distance;
        cin>>u>>v>>distance;
        g.insert(u,v,distance);
    }
    set<pair<int,int>> st;
    vector<int> dist(n);
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
    }
    dist[src]=0;
    st.insert(make_pair(0,src));

    while(!st.empty()){
        auto top= *(st.begin());
        st.erase(st.begin());

        int nodedistance= top.first;
        int node=top.second;

        for(auto it: g.adj[node]){

            if(nodedistance + it.second < dist[it.first]){
                auto record =st.find(make_pair( dist[it.first],it.first));

                if(record != st.end()){
                    st.erase(record);
                }

                dist[it.first]=nodedistance + it.second;
                st.insert(make_pair(dist[it.first],it.first));
            }
        }

    }

    for(auto it: dist){
        cout<<it<<" ";
    }
    cout<<endl;






}