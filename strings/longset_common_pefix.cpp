#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> a;
    for(int i=0;i<n;i++){
        string c;
        getline(cin,c);
        a.push_back(c);
    }

    string check = a[0];
    string prefix;
    for(int i =1 ;i<a.size();i++){
        string comp = a[i];
        int j=0;
        while(j< comp.length()){
            if(check[j] == comp[j]){
                if(!prefix.find(check[j])){
                    prefix += check[j];
                }
            }
            j++;
        }
        if(prefix.empty()){
            cout<<""<<endl;
            return 0;
        }
    }
    cout<<prefix<<endl;

}