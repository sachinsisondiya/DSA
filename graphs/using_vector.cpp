#include<iostream>
#include<vector>
using namespace std;
void add(int u,int v,bool direction,vector<vector<int>> &graphs){
  graphs[u][v]=1;

  if(!direction){
      graphs[v][u]=1;
  }

}
int main(){
    int n,m;
    cout<<"no of nodes"<<"";
    cin>>n;

    cout<<"no of edges"<<"";
    cin>>m;


    vector< vector<int>> graphs(n,vector<int>(n,0));

    for(int i=0;i<m;i++){
        int u,v;
        bool directions;
        cin>>u>>v>>directions;
        add(u,v,directions,graphs);
    }

    for(auto i: graphs){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}