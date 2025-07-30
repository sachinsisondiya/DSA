//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int m;
//    cin>>m;
//    int arr[n][n];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    sort(&arr[n][m],&arr[n][m] + n*m);
//    vector<vector<int>> ans;
////    for(int i=0;i<n;i++){
////        for(int j=0;j<m;j++){
////            cout<<arr[i][j];
////        }
////    }
//
//    for(int i=0;i<n;i++){
//
//        if(ans.empty()  || ans.back()[1] < arr[i][0]){
//            ans.push_back({arr[i][0],arr[i][1]});
//
//        }
//        else{
//            ans.back()[1] = max(ans.back()[1],arr[i][1]);
//        }
//
//    }
//
////    for(int i=0;i<n;i++){
////        int start = arr[i][0];
////        int end = arr[i][1];
//
////        if(!ans.empty() && end <= ans.back()[1]){
////            continue;
////        }
////        for(int j=i+1;j<n;j++){                              brute force
////            if(end >= arr[j][0]){
////                end = max(end,arr[j][1]);
////
////            }
////            else{
////                break;
////            }
////        }
////        ans.push_back({start,end});
////
////    }
//    for(auto it :ans){
//        for(auto j:it){
//            cout<<j<<" ";
//        }
//    }
//
//
//}