#include<iostream>
#include<vector>
using namespace std;
 void valid(vector<string> &(st) , string s , char ch , int n ,int open , int closed){

     if(s.size() == 2*n){
         st.push_back(s);
     }

     if(open < n){
         valid(st , s + '(' , '(' , n , open +1 , closed);
     }
     if(closed < open){
         valid(st , s + ')' , ')' , n , open  , closed+1);

     }


 }

void find(vector<string> &(st) , int n){

    valid(st , "" , '(' , n  , 0 , 0);
}
int main(){
    int n;
    cin>>n;

    vector<string> st;

    find(st , n);

    for(auto it : st){
        cout<<it<<" ";
    }
    return 0;


}
