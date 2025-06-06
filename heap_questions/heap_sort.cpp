#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i) {
    int largest = i; // for max-heap
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[],int n){
    int size=n;

    while(size > 0){
        swap(arr[0],arr[size-1]);
        size--;

        heapify(arr,size,0);
    }
}
int main(){
    int arr[6]={30,54,53,55,52,50};
    int n=6;
    for(int i= n/2-1 ; i>=0;i--){
        heapify(arr,n,i);
    }

    heapsort(arr,n);

    cout<<"new array is";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

    return 0;

}