#include<iostream>
#include<stack>
using namespace  std;
int main(){
    string s;
    getline(cin,s);

    stack<char> st;
    int sum = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push('(');
        }
        else
        {
            if(st.empty()){
                sum ++;
            }
            else{
                st.pop();
            }
        }
    }
    if(!st.empty()){
        cout<<st.size();
    }
    else{
        cout<<sum;
    }
}