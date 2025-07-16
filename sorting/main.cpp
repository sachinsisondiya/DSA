//// selection sort
//#include<iostream>
//using namespace std;
//void selectionSort(int arr[],int n){
//    for(int i=0;i<n;i++){
//        int maxi=i;
//        for(int j=i+1;j<n;j++){
//            if(arr[j]<arr[maxi]){
////                swap(arr[j],arr[i]);
//               maxi=j;
//            }
//        }
//        int temp=arr[maxi];
//        arr[maxi]=arr[i];
//        arr[i]=temp;
//
//    }
//}
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    selectionSort(arr,n);
//    for(int i=0;i<n;i++){
//        cout<<arr[i];
//    }
//}