#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;
class graph{
public:
    unordered_map<int,list<int>> adj;
    void insert(int u,int v){
        adj[u].push_back(v);
    }
};
int main(){
    graph g;
    int n, m;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    cout<<"enter the no of edges"<<endl;
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }
    vector<int> indegree(n+1,0);

    for(auto it: g.adj){
        for(auto j:it.second){
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0){
            q.push(i);
        }

    }

    int cnt=0;

    while(!q.empty()){
        int front=q.front();
        q.pop();
        cnt++;

        for(auto it: g.adj[front]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }


    if(cnt==n){
        cout<<"it is not cycle"<<endl;
    }
    else{
        cout<<"it is cycle"<<endl;
    }
}