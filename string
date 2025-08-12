#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<int> z(s.length(),0);
    int l=0;
    int r= 0;
    for(int i=1;i<s.length();i++){

        if(r < i){
            l=r=i;
            while(r<s.length() && s[r] == s[r-l]){
                r++;
            }
            z[i] = r-l;
            r--;
        }
        else{
            int k = i-l;
            if(z[k] < r-i +1){
                z[i] = z[k];
            }else{
                l=r=i;
                while(r<s.length() && s[r] == s[r-l]){
                    r++;
                }
                z[i] = r-l;
                r--;
            }
        }
    }
    for(auto it: z){
        cout<<it;
    }
}