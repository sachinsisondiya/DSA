#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<limits>
#include<unordered_map>
using namespace std;
class graph{
public:
    unordered_map<int,list <pair<int,int>>> adj;

    void insert(int u, int v,int weight){
        pair<int,int>p= make_pair(v,weight);
        adj[u].push_back(p);
    }
    void print(){
        for(auto it: adj){
            cout<<it.first<<"->";
            for(auto j:it.second){
                cout<<"("<<j.first<<","<<j.second<<')';
            }
            cout<<endl;
        }
    }

    void dfs(int node,stack<int> &s, unordered_map<int,bool> &visited,unordered_map<int,list <pair<int,int>>> &adj){
        visited[node]=true;

        for(auto it: adj[node]){
            if(!visited[it.first]){
                dfs(it.first,s,visited,adj);
            }
        }
        s.push(node);

    }

    void shortest(int src,stack<int> &s,vector<int> &dist){

        dist[src]=0;

        while(!s.empty()){

            int curr=s.top();
            s.pop();

            if(dist[curr] != INT_MAX){

                for(auto it:adj[curr]){
                    if(dist[curr] + it.second <dist[it.first]){
                        dist[it.first] = dist[curr] + it.second;
                        cout<<dist[it.first]<<endl;
                    }

                }
            }
        }




    }



};
int main(){
    int n=5;
    int src=1;

    graph g;

    g.insert(0,1,5);
    g.insert(0,2,3);
    g.insert(1,2,2);
    g.insert(1,3,6);
    g.insert(2,3,7);
    g.insert(2,4,4);
    g.insert(2,5,2);
    g.insert(3,4,-1);
    g.insert(4,5,-2);

    g.print();

    unordered_map<int,bool>visited(n);
    stack<int> s;

    for(auto i=0;i<n;i++){
        if(!visited[i]){
            g.dfs(i,s,visited,g.adj);
        }
    }
    vector<int> dist(n);
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
    }

//    while(!s.empty()){
//        cout<<s.top()<<" ";   this code for only check
//        s.pop();
//    }
//    cout<<endl;

    g.shortest(src,s,dist);

    for(auto it : dist){
        cout<<it<<" ";
    }





}