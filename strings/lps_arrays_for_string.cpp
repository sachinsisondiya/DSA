#include<iostream>
#include<vector>

using namespace std;
int main(){
   string s;
   getline(cin,s);
   vector<int> lps(s.length(),0);
   int i = 1;
   int len = 0;
   lps[0] = 0;
   while(i<s.length()){

       if(s[i] == s[len]){
           len++;
           lps[i]=len;
           i++;
       }
       else{
           if(len!=0){
               len = lps[len-1];
           }
           else{
               lps[i] = 0;
               i++;
           }

       }

   }
   for(auto it:lps){
       cout<<it<<" ";
   }

}