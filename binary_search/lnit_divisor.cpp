#include<iostream>
#include <algorithm>
#include<vector>
#include<cmath>
using namespace std;

int sumOf(vector<int> arr ,int mid){
    int sum  = 0;
    for(int i=0;i<arr.size();i++){
         sum += ceil((double)arr[i]/ (double)mid);


    }

    return sum;
}
int main(){
    int n;
    cin>>n;
    int limit;
    cin>>limit;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low= *min_element(arr.begin()  ,arr.end());
//    cout<<low;
    int high  =*max_element(arr.begin()  ,arr.end());
//  cout<<high;
int maxi  = INT_MIN;
    while(low <= high){
        int mid = low + (high - low)/2;

        int target = sumOf(arr,mid);
        //        return 0;
        if(target > limit){
            high = mid-1;
        }
        else{
            maxi  =max(maxi,target);
            low =  mid +1;
        }
    }
      cout<<maxi<<endl;

return 0;





}
