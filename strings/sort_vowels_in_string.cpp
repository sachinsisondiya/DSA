//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//    string s;
//    getline(cin ,s);
//    vector<int> a;
//    // extract vowels
//    for(int i=0;i<s.length();i++){
//        if(s[i] == 'A' || s[i] == 'E' || s[i]=='I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
//            int digit = int(s[i]);
//            a.push_back(digit);
//        }
//
//    }
//    sort(a.begin() , a.end());
//    string t;
//    t = s;
//    int index = 0;
//    for(int i=0;i<t.length();i++){
//        if(s[i] == 'A' || s[i] == 'E' || s[i]=='I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
//           char ch = char(a[index]);
//           t[i] = ch;
//           index ++;
//        }
//
//    }
//    cout<<t;
//
//
//}