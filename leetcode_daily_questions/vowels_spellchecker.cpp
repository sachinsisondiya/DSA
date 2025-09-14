#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> wordList = {"KiTe","kite","hare","Hare"};
    vector<string> queries = {"kite","Kite","KiTe","Hare","HARE","Hear","hear","keti","keet","keto"};
    vector<string> ans;
    for(int j=0;j<queries.size();j++){
        string second = queries[j];
        string found = "";
        for(int i=0;i<wordList.size();i++){
            string first  = wordList[i];
            bool isfind = true;
            if(first.size() != second.size()){
                continue;
            }
            

                for(int k=0;k<first.size();k++){
                    char firstLetter = tolower(first[k]);
                    char  secondLetter = tolower(second[k]);

                    if(firstLetter == secondLetter) {
                        continue;
                    }
                     if((firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' || firstLetter == 'u') && (secondLetter == 'a' || secondLetter == 'e' || secondLetter == 'i' || secondLetter == 'o' || secondLetter == 'u' )){
                        continue;
                    }
                    isfind = false;
                    break;

                }


            if(isfind){
                found = first;

                break;
            }


        }
        ans.push_back(found);

    }
    for(auto  it : ans){
        cout<<it<<" ";
    }
    return 0;
}