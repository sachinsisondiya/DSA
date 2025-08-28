//#include<iostream>
//#include<vector>
//using namespace std;
//void sum(int n,vector<int> &a,int target, vector<vector<int>> &ans, vector<int>&temp){
//    if(target==0){
//        ans.push_back(temp);
//        return;
//    }
//    for(int i=n;i<a.size();i++){
//
//        if(i>n && a[i]==a[i-1]) continue;
//        if(a[i]>target) break;
//        temp.push_back(a[i]);
//        sum(i+1,a,target-a[i],ans,temp);
//        temp.pop_back();
//    }
//
//}
//int main(){
//    int n;
//    cin>>n;
//    int target;
//    cin>>target;
//    vector<int>a(n);
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    vector<vector<int>> ans;
//    vector<int>temp;
//
//    sum(0,a,target,ans,temp);
//    for(auto it:ans){
//        for(auto j:it){
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
//
//
//}