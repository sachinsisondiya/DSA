//#include<iostream>
//#include<list>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//class graph{
//public:
//    unordered_map<int,list<int>> adj;
//    void insert(int u, int v){
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//};
//void dfs(int node, int parent,int &timer,vector<int> &disc,vector<int> &low, unordered_map<int,bool> &visited ,
//         vector<int> &ans,unordered_map<int,list<int>> &adj){
//
//    visited[node]=true;
//    disc[node]=low[node]=timer++;
//
//    int child=0;
//    for(auto it: adj[node]){
//        if(it==parent){
//            continue;
//        }
//        if(!visited[it]){
//            dfs(it,node,timer,disc,low,visited,ans,adj);
//            if(low[it]>=disc[node] && parent!=-1){
//                ans[node]=1;
//            }
//            child++;
//        }
//        else{
//            low[node]=min(low[node],disc[it]);
//        }
//    }
//    if(parent==-1 && child>1){
//        ans[node]=1;
//    }
//
//}
//int main(){
//    graph g;
//    int n,m;
//    cout<<"enter the no node"<<endl;
//    cin>>n;
//    cout<<"enter the no of edges"<<endl;
//    cin>>m;
//
//    for(int i=0;i<m;i++){
//        int u,v;
//        cin>>u>>v;
//        g.insert(u,v);
//    }
//
//    vector<int> disc(n);
//    vector<int> low(n);
//    unordered_map<int,bool>visited;
//    int parent=-1;
//    int timer=0;
//
//    for(int i=0;i<n;i++){
//        disc[i]=low[i]=-1;
//    }
//    vector<int>ans(n,0);
//
//    for(int i=0;i<n;i++){
//        if(!visited[i]){
//            dfs(i,parent,timer,disc,low,visited,ans,g.adj);
//        }
//    }
//   for(int i=0;i<n;i++){
//       if(ans[i]==1){
//           cout<<i<<endl;
//       }
//   }
//}