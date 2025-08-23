#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m ,k;
    cin>>n>>m>>k;
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<n;i++){
        int g;
        cin>>g;
        arr1.push_back(g);
    }
    for(int i=0;i<m;i++){
        int g;
        cin>>g;
        arr2.push_back(g);
    }
    if( n > m){
        vector<int> arr3;
        arr3 = arr1;
        arr1 = arr2;
        arr2 = arr3;
    }
    int low = max(0 , k-m);
    int high = min(k ,n);
    while(low <= high){
        int mid1 = (low + high)/2;
        int mid2 =  k - mid1;
        int l1 = 0 ? INT_MIN: arr1[mid1-1];
        int l2  = 0 ? INT_MIN: arr2[mid2-1];
        int r1 = n ? INT_MAX: arr1[mid1];
        int r2 = m ? INT_MAX: arr2[mid2];

        if(l1 <= r2 && l2 <= r1){
            cout<< max(l1,l2);
            return 0;
        }
        else if(l1 > r2){
            high = mid1 -1;
        }
        else{
            low = mid1 +1;
        }
    }
    return -1;
}