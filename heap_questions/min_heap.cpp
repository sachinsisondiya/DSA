//#include<iostream>
//using namespace std;
//
//void heapify(int arr[],int n,int i){
//    int smallest=i;
//    int left=2*i +1;
//    int right=2*i +2;
//
//    if(left<n && arr[smallest]>arr[left]){
//        smallest=left;
//    }
//    if(right<n && arr[smallest] >arr[right]){
//        smallest=right;
//    }
//
//    if(smallest!=i){
//        swap(arr[smallest],arr[i]);
//        heapify(arr,n,smallest);
//    }
//
//
//}
//int main(){
//    int arr[6]={30,54,53,55,52,50};
//    int n=6;
//    for(int i= n/2-1 ; i>=0;i--){
//        heapify(arr,n,i);
//    }
//
//    cout<<"new array is";
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//
//    }cout<<endl;
//
//    return 0;
//
//}