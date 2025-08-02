#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    size_t n = s.length();
    string sum;
    for(int i=0;i<n;i++){
        char ch = s[i];

        if(ch == '0' && i==0){

            continue;
        }
        else if(ch % 2==1){
            sum += ch;
        }
        else if(s[i] % 2 == 0 && i != n-1){
            sum += ch;
        }
    }
    cout<<sum;
}