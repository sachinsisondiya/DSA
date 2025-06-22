#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
class graphs{
public:
    unordered_map<int,list<int>> adj;
     void insert(int u,int v){
         adj[u].push_back(v);
     }
};
int main(){
    graphs g;
    int n,m;
    cout<<"no of nodes"<<endl;
    cin>>n;
    cout<<"no of nodes"<<endl;
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v);
    }
    vector<int> indegre(n);
    for(auto it: g.adj){
        for(auto j:it.second){
            indegre[j]++;
        }
    }
    vector<int> ans;

    queue<int> q;
    for(int i=1;i<n;i++){
        if(indegre[i]==0){
            q.push(i);
        }
    }
    // do bfs

    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);

        for(auto it: g.adj[front]){
            indegre[it]--;
            if(indegre[it]==0){
                q.push(it);
            }
        }

    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;

}