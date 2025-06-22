#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
#include<algorithm>
using namespace std;
class graph{
public:
    unordered_map<int,list<int>> adj;
    void insert(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
};
int main(){

    graph g;

    int n,m;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    cout<<"enter the no of adges"<<endl;
    cin>>m;
    // adjancency list is ready
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }
    int source,destination;
    cout<<"enter your source"<<endl;
    cin>>source;
    cout<<"enter your destination"<<endl;
    cin>>destination;
    unordered_map<int,bool> visited(n+1);
    unordered_map<int,int> parent;

    queue<int> q;
    q.push(source);
    visited[source]=true;
    parent[source]=-1;

    while(!q.empty()){
        int curr=q.front();
        q.pop();

        for(auto it:g.adj[curr]){
            if(!visited[it]){
                visited[it]=true;
                parent[it]=curr;
                q.push(it);
            }
        }
    }
    //prepare shortest path
    vector<int> ans;
    int dest=destination;
    ans.push_back(dest);
    while(dest!=source){
        dest=parent[dest];
        ans.push_back(dest);
    }
    cout<<endl<<"path is :";
    reverse(ans.begin(),ans.end());

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}