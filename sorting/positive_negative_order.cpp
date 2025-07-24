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
    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<n;i++){
      if(arr[i]<0){
          neg.push_back(arr[i]);
      }
      else{
          pos.push_back(arr[i]);
      }

    }
    //for(int i=0;iN;i+)

    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }

        int j=neg.size()*2;
        for(int index=j; j<pos.size();index++){
            arr[index]=pos[index];
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int j= pos.size()*2;
        for(int index=j;j<neg.size();index++ ){
            arr[index]=neg[index];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}