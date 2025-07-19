#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1){
        cout<<"there is no zero";
        return 0;
    }

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
        }
    }

//    vector<int> temp;
//
//    for(int i=0;i<n;i++){
//        if(arr[i]!=0){
//            temp.push_back(arr[i]);
//        }
//    }
//
//    int size=temp.size();
//    for(int i=0;i<size;i++){
//        arr[i]=temp[i];
//    }
//
//    for(int i=size;i<n;i++){
//        arr[i]=0;
//    }
     for(int i=0;i<n;i++){
         cout<<arr[i];
     }


}