#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int freq[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        freq[ch-'a']++;
    }
    int test;
    cin>>test;
    while(test--){
        char ch;
        cin>>ch;

        cout<<freq[ch-'a']<<" ";

    }
}