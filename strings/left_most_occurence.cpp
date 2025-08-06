#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int arr[26] ;
    fill(arr,arr +26 , -1);

    int ans = INT_MAX;
    for(int i=0;i<s.length();i++){
        int num = arr[s[i] - 'a'];
        if(num == -1){
            arr[s[i]-'a'] = i;
        }
        else{
            ans = min(ans,num);
        }
    }
//
//    for(int i=0;i<s.length();i++){
//        arr[s[i]-'a']++;
//    }
//
//    for(int i=0;i<s.length();i++){
//        if(arr[s[i]-'a'] > 1){
//            cout<<i;
//            return 0;
//        }
//    }
if(ans  == INT_MAX){
    cout<<-1;
    return 0;
}
    cout<<ans;
    return 0;
}