//#include<iostream>
//using namespace std;
//int main(){
//    int n,target;
//    cin>>n>>target;
//    int arr[10];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int low = 0;
//    int high = n-1;
//    int lastOccurence = -1;
//
//    while(low <= high){
//        int mid = low + (high - low)/2;
//        if(arr[mid] == target){
//            lastOccurence = mid;
//            if(low == high){
//                break;
//            }
//            low = mid+1;
//        }
//        else if(arr[mid] < target){
//            low = mid +1;
//        }
//        else{
//            high = mid -1;
//        }
//    }
//    cout<<lastOccurence;
//}