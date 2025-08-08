#include<iostream>
#include<vector>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string target;
    getline(cin, target);
    string temp ="";
    int cnt = 0;
    while (temp.length() <= target.length()) {

        cnt++;
        temp += s;
        cout<<"first";
        if (temp.length() == target.length() || temp.length() > target.length()) {
            cout<<"second";
            if (temp.find(target) != string::npos ) {
                cout << cnt;
                return 0;
            }
        }

    }
    cout << -1 << endl;
//    vector<int> ans;
//
//    for(int i=0;i<s.length();i++){
//
//        for(int j=i+1;j<s.length();j++){
//            string temp = s.substr(i,j-i+1);
//            if(temp == target){
//                ans.push_back(i);
//                break;
//            }
//
//        }
//    }
//    for(auto it :ans){
//        cout<<it<<" ";
//    }

}