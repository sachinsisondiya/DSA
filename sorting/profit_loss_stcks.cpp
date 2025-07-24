//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int buy=0;
//    int sell=0;
//    int mini=INT_MAX;
//    int profit=0;
//    for(int i=0;i<n;i++) {
//        mini= min(mini,arr[i]);
//        profit= max(profit,profit-mini);
//    }
//    cout<<profit;
//
////    for(int i=0;i<n;i++){
////        buy=arr[i];
////        for(int j=i+1;j<n;j++){
////            sell=arr[j];
////            int diff= sell-buy;
////            if(diff>profit && diff>0){
////                profit=max(profit,diff);
////                day=j+1;
////
////            }
////
////        }
////    }
////    cout<<day;
//}