#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int>> ans;
    sort(arr, arr+n);

    for(int i=0;i<n;i++){
        if(i !=0 && arr[i]==arr[i-1]) continue;
        int j = i+1;
        int k = n-1;

        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
            }
            while(j<k && arr[j]==arr[j-1]) j++;
            while(j<k && arr[k] == arr[k+1]) j--;
        }
    }



//    for(int i=0;i<n;i++){
//        set<int> hasMap;
//        for(int j=i+1;j<n;j++){
//            int k = -(arr[i]+arr[j]);
//            if(hasMap.find(k) != hasMap.end()){
//                vector<int> s = {arr[i],arr[j],k};
//                sort(s.begin(),s.end());
//                ans.insert(s);
//            }
//            hasMap.insert(arr[j]);
//        }
//    }

//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//
//            for(int k=j+1;k<n;k++){
//                int sum =0;
//                vector<int>temp;
//
//                sum = arr[i]+arr[j]+arr[k];
//
//                if(i!=j && j!=k && sum==0){
//                    temp.push_back(arr[i]);
//                    temp.push_back(arr[j]);
//                    temp.push_back(arr[k]);
//                }
//                sort(temp.begin(),temp.end());
//                if(!temp.empty()){
//                    ans.insert(temp);
//                }
//            }
//
//        }
//    }
    for(auto it :ans){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}