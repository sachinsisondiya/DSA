#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int vowelsCount = 0;
    for (int i=0;i<s.size();i++){
        if(s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowelsCount ++;
        }
    }
    if(vowelsCount == 0){
        cout<<"bob is loose the game"<<endl;
        return 0;
    }
    if(vowelsCount %2 == 1){
         cout<<"boob is winning the game"<<endl;
         return 0;
    }
    else{

    }


    return 0;
}