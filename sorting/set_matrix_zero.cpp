//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//    int n,m;
//    cin>>n>>m;
//    vector<vector<int>> a;
//    for(int i=0;i<n;i++){
//        vector<int> col;
//        for(int j=0;j<m;j++){
//            int k;
//            cin>>k;
//            col.push_back(k);
//
//        }
//        a.push_back(col);
//    }
//    vector<pair<int,int>> ans;
//
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(a[i][j]==0){
//                ans.push_back({i,j});
//            }
//        }
//    }
//    for(auto it:ans){
//        int row=it.first;
//        int cl=it.second;
//        for(int i=0;i<m;i++){
//            a[row][i]=0;
//        }
//
//        for(int i=0;i<n;i++){
//            a[i][cl]=0;
//        }
//
//    }
//
//    for(auto it:a){
//        for(auto j:it){
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
//}