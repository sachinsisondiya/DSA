#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    string temp ;
    int i = 0;
    int j = s.length()-1;
    while(i<j){

        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            temp += s[j];
            j--;
        }
        if(i == j){
            temp +=s;
            string rev;
            rev = temp;
             reverse(rev.begin(),rev.end());
             if(temp == rev){
                 cout<<temp;
                 return 0;
             }
        }

    }
    return 0;
}