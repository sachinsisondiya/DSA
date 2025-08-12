//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int target;
//    cin>>target;
//
//    int arr[10];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int low = 0;
//    int high = n-1;
//    while( low <= high){
//        long long mid  = (low + high)/2;
//
//        if(arr[mid] == target){
//            cout<<mid<<endl;
//            return 0;
//        }
//        else if(arr[mid] > target){
//            high = mid-1;
//        }
//        else{
//            low = mid + 1;
//        }
//    }
//    return 0;
//}