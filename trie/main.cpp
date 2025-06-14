//#include<iostream>
//using namespace std;
//class TrieNode{
//public:
//    char data;
//    TrieNode* children[26];
//    bool terminal;
//
//    TrieNode(char data){
//        this->data=data;
//
//        for(int i=0;i<26;i++){
//            children[i]=NULL;
//        }
//        terminal=false;
//    }
//};
//
//class Tries{
//public:
//    TrieNode* root;
//    Tries(){
//        root = new TrieNode('\0');
//    }
//
//    void insertUtil(TrieNode* root , string word){
//        // base case
//        if(word.length() ==0){
//            root->terminal =true;
//            return ;
//        }
//
//        int index = word[0]-'A';
//        TrieNode* child;
//
//        if(root->children[index] !=NULL){
//            child=root->children[index];
//        }
//        else{
//            child = new TrieNode(word[0]);
//            root->children[index]=child;
//        }
//
//        //
//        insertUtil(child,word.substr(1));
//    }
//
//    void insert(string word){
//        insertUtil(root, word);
//    }
//    // FOR SEARCH
//    bool searchUtil(TrieNode* root, string word){
//        if(word.length() ==0){
//            return root->terminal;
//        }
//
//        int index = word[0]-'A';
//        TrieNode* child;
//
//        if(root->children[index] !=NULL){
//            child=root->children[index];
//        }
//        else{
//            return false;
//        }
//        return searchUtil(child , word.substr(1));
//    }
//
//    bool search(string word){
//        return searchUtil(root,word);
//    }
//    // remove logic
//
//    void removeUtil(TrieNode* root, string word){
//        if(word.length() ==0){
//                root->terminal=false;
//                return;
//
//
//        }
//
//        int index = word[0]-'A';
//        TrieNode* child;
//
//        if(root->children[index] !=NULL){
//            child=root->children[index];
//        }
//        else{
//            return ;
//        }
//         removeUtil(child , word.substr(1));
//    }
//
//
//
//    void remove(string word){
//        removeUtil(root,word);
//    }
//};
//int main(){
//    Tries* t=new Tries();
//    t->insert("ABCD");
//    t->insert("ABBC");
//    cout<<t->search("ABCD")<<endl;
//    cout<<t->search("ABB");
//    cout<<endl;
//    t->remove("ABCD");
//    cout<<t->search("ABCD")<<endl;
//
//
//
//
//
//
//}