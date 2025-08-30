#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void solve( unordered_map<int , string> &a ,vector<string> &ans , string s, int index, string &main){
    if(index == main.length()){
        ans.push_back(s);
    }
     char ch = main[index];
    int digit  = ch - '0';
    string temp;
    temp = a[digit];
    for(auto it :temp){
        s.push_back(it);
        solve(a,ans,s,index+1,main);
        s.pop_back();
    }
}
int main(){
    unordered_map<int , string> a= {
            {2 , "abc"},
            {3 , "def"},
            {4 ,"ghi"},
            {5 ,"jkl"},
            {6,"mno"},
            {7,"pqrs"},
            { 8 , "tuv"},
            { 9 , "wxyz"}
    };

    string main;
    getline(cin,main);
    vector<string> ans;
    ans.push_back("");
    solve(a , ans , "" , 0 , main);
    for(auto it :ans){
        cout<<it<<" ";
    }
    return 0;
}