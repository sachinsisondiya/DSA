#include<iostream>
#include<vector>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    int childcount;
    bool terminal;

    TrieNode(char data){
        this->data=data;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        childcount=0;
        terminal=false;
    }
};

class trie{
public:
    TrieNode* root;
    trie(char ch){
        root=new TrieNode(ch);
    }
        void insertUtil(TrieNode* root , string word){
        // base case
        if(word.length() ==0){
            root->terminal =true;
            return ;
        }

        int index = word[0]-'a';
        TrieNode* child;

        if(root->children[index] !=NULL){
            child=root->children[index];

        }
        else{
            child = new TrieNode(word[0]);
            root->children[index]=child;
            root->childcount++;
        }

        //
        insertUtil(child,word.substr(1));
    }

    void insert(string word){
        insertUtil(root, word);
    }
    void printSuggestions(TrieNode* curr,vector<string> &temp,string prefix){
        if(curr->terminal){
            temp.push_back(prefix);

        }

        for(char ch= 'a'; ch <= 'z';ch++){

            TrieNode* next = curr->children[ch-'a'];

            if(next != NULL){
                prefix.push_back(ch);
                printSuggestions(next,temp,prefix);
                prefix.pop_back();
            }
        }
    }

    vector<vector<string>> getSuggestions(string str){
        TrieNode* prev=root;
        vector<vector<string>> output;
        string prefix;

        for(int i=0;i<str.length();i++){
            char lastch=str[i];

            prefix.push_back(lastch);

            TrieNode* curr = prev -> children[lastch - 'a'];

            // if not found

            if(curr == NULL){
                break;
            }
            // if found

            vector<string> temp;
            printSuggestions(curr,temp,prefix);

            output.push_back(temp);
            temp.clear();
            prev=curr;

        }
        return output;
    }
};
int main(){
    string queryStr;
    cin>>queryStr;
    int n;
    cin>>n;
    vector<string> contactlist(n);
    for(int i=0;i<n;i++){
        cin>>contactlist[i];
    }

    trie* t=new trie('\0');
    // insert all contact in trie

    for(int i=0;i<n;i++){
        t->insert(contactlist[i]);
    }

    vector<vector<string>> ans=t->getSuggestions(queryStr);

    for (auto &it:ans){
       for(auto& word: it){
           cout<<word<<" ";
       }
       cout<<endl;
    }




}