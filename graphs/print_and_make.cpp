#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
public:
    unordered_map<int,list<int>> adj;
    void insert(int u,int v,bool direction ){
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }

    }


};
int main(){
    int n ;
    int m;
    cin>>n>>m;
    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.insert(u,v,0);
    }

    vector<vector<int>>newadj(n);
    for(int i=0;i<n;i++){
        for(auto it: g.adj[i]){
            newadj[i].push_back(it);
        }
    }


    for (int i = 0; i < n; i++) {
        cout << i;
        for (int j = 0; j < newadj[i].size(); j++) {
            cout << " " << newadj[i][j];
        }
        cout << endl;
    }











}