#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n==1) cout<<"1";
    if(n==2) cout<<"11";
    string s;
    s += "11";


    for(int i = 3;i<=n;i++) {

       string temp ="";
       s+="$";
       int cnt = 1;
       for(int j=1;j<s.length();j++){

           if(s[j] != s[j-1]){
               temp+= to_string(cnt);
               temp += s[j-1];
               cnt=1;
               cout<<temp<<endl;
           }
           else{
               cnt++;
           }
       }
       s  = temp;

    }
    cout<<s;
}