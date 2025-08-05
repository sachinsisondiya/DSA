#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int i =0;
    int maxi = INT_MAX;
    int mini = INT_MIN;
    int n = s.length();
    while(i<n && s[i] == ' '){
        i++;
    }
    if(i == n){
        return 0;
    }
    int sign = 1;
    if(s[i] == '-' || s[i] == '+' ){
        if(s[i]=='-'){
            sign = -1;
        }
        i++;
    }
    int res = 0;
    while(i<n && s[i] >= '0' && s[i]<= '9'){

            int digit = s[i] - '0';
            if(digit == 0){
                i++;
                continue;
            }

            res = res * 10 + digit;
            i++;



    }

    if(res*sign >= maxi){
        cout<<maxi;
    }
    else if(res*sign <= mini){
        cout<<mini;
    }
    else{
        cout<<res*sign;
    }


}
