//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//
//    vector<int> arr;
//    for(int i=0;i<n;i++){
//        int a;
//        cin>>a;
//        arr.push_back(a);
//    }
//
//
//    vector<int>ans(n);
//
//    stack<int> st;
//
//    for(int i=n-1;i>=0;i--){
//        if(st.empty()){
//            st.push(arr[i]);
//            ans[i] = -1;
//        }
//        else if(st.top() < arr[i]){
//            ans[i]  =st.top();
//            st.push(arr[i]);
//        }
//        else{
//            while(!st.empty() && st.top() >= arr[i]){
//                st.pop();
//            }
//            if(st.empty()) {
//                ans[i] = -1;
//
//            }
//            else{
//                ans[i]  =st.top();
//
//            }
//            st.push(arr[i]);
//
//        }
//
//
//    }
//    for(auto it : ans){
//        cout<<it<<" ";
//    }
//    return 0;
//
//
//}