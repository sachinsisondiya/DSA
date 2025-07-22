//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    int k;
//    cin>>n>>k;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    pair<int,int>p= make_pair(-1,-1);
//    bool isPresent =false;
//    for(int i=0;i<n;i++){
//
//        for(int j=0;j<n;j++){
//            int sum = arr[i]+arr[j];
//            if(sum== k){
//                isPresent=true;
//                p=make_pair(i,j);
//            }
//        }
//    }
//    if(isPresent){
//        cout<<"yes"<<endl;
//        cout<<p.first <<"-"<<p.second;
//    }
//    else{
//        cout<<"no"<<endl;
//        cout<<p.first <<"-"<<p.second;
//    }
//}