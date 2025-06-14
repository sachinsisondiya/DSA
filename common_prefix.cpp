#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string ans= "";
    for(int i=0;i<a[0].length();i++){
        char ch =a[0][i];
        bool match =true;

        for(int j=1;j<n;j++){
             if(a[j].size()<i || ch!=a[j][i]  ){
                 match = false;
                 break;
             }
        }
        if(match==false){
            break;
        }
        else{
            ans.push_back(ch);
        }

    }
    cout<<ans;
}