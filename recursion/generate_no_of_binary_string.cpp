//#include<iostream>
//#include<vector>
//using namespace std;
//void gen(vector<string>&(st) , string s , char ch , int n){
//    if(s.size() == n){
//        st.push_back(s);
//        return ;
//    }
//    gen(st  , s + '0' , '0', n);
//
//    if(ch == '0'){
//        gen(st , s +'1' , '1' ,n);
//    }
//
//}
//void call(vector<string>&(st) , int n){
//    gen(st , "" , '0' , n);
//}
//int main(){
//    int n;
//    cin>>n;
//    vector<string> st;
//    call(st , n);
//
//    for(auto it: st){
//        cout<<it<<" ";
//    }
//    return 0;
//}