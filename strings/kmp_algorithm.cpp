#include<iostream>
#include<vector>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    string s;
    getline(cin,s);
    vector<int>lps(s.length(),0);
    int len = 0;
    int i = 1;
    while(i<s.length()){
        if(s[i] == s[len]){
            len++;
            lps[i] =len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
    vector<int> ans;
    i=0;
    int j=0;
    int m = s.length();
    int n = text.length();

    while(i<n){
        if(text[i] == s[j]){
            i++;
            j++;
            if(j == m){
                ans.push_back(i-j);
                 j = lps[j-1];
            }

        }
        else{
            if( j!= 0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
    }

    for(auto it :ans){
        cout<<it<<" ";
    }



}