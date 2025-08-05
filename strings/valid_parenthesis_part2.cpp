//#include<iostream>
//#include<stack>
//using namespace std;
//int main(){
//    string s;
//    getline(cin,s);
//
//    stack<char> st;
//
//    int maxi =0;
//    for(int i=0;i<s.length();i++){
//        char ch = s[i];
//        if(ch == '('){
//            st.push(ch);
//        }
//        else if(ch == ')' && st.top() == '('){
//            st.pop();
//        }
//        if(st.size() > maxi){
//            int m = st.size();
//            maxi = max(maxi , m);
//        }
//
//    }
//    cout<<maxi;
//}
