#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    getline(cin,s);


    stack<string>st;
    string c="";
    for(int i=0;i<=s.length();i++){

        if(s[i]==' ' || i == s.length()){
         st.push(c);
         cout<<c<<endl;
         c ="";
        }
        else{
            c+=s[i];
        }


    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
//    string c;
//   while(!st.empty()){
//       string ch = st.top();
//
//       if(ch != " "){
//           c.push_back(ch);
//       }
//       st.pop();
//
//   }
//   cout<<c;


}