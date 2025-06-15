//#include<iostream>
//#include<vector>
//using namespace std;
//class TrieNode{
//public:
//    char data;
//    TrieNode* children[26];
//    int childcount;
//    bool terminal;
//
//    TrieNode(char data){
//        this->data=data;
//        for(int i=0;i<26;i++){
//            children[i]=NULL;
//        }
//        childcount=0;
//        terminal=false;
//    }
//};
//
//class trie{
//public:
//    TrieNode* root;
//    trie(char ch){
//        root=new TrieNode(ch);
//    }
//        void insertUtil(TrieNode* root , string word){
//        // base case
//        if(word.length() ==0){
//            root->terminal =true;
//            return ;
//        }
//
//        int index = word[0]-'a';
//        TrieNode* child;
//
//        if(root->children[index] !=NULL){
//            child=root->children[index];
//
//        }
//        else{
//            child = new TrieNode(word[0]);
//            root->children[index]=child;
//            root->childcount++;
//        }
//
//        //
//        insertUtil(child,word.substr(1));
//    }
//
//    void insert(string word){
//        insertUtil(root, word);
//    }
//    void lcp(string str,string &ans){
//        for(int i=0;i<str.length();i++){
//            char ch=str[i];
//
//            if(root->childcount==1){
//                ans.push_back(ch);
//                int index=ch-'a';
//                root = root->children[index];
//            }
//            else{
//                break;
//
//            }
//            if(root-> terminal){
//                break;
//            }
//        }
//
//    }
//};
//
//int main(){
//    int n;
//    cin>>n;
//    vector<string> a(n);
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    trie*t =new trie('\0');
//
//    for(int i=0;i<n;i++){
//        t->insert(a[i]);
//    }
//
//    string first =a[0];
//    string ans ="";
//    t->lcp(first,ans);
//    cout<<ans<<endl;
//
//
//    // t.c o(n* m)  s.c (1)
////    string ans= "";
////    for(int i=0;i<a[0].length();i++){
////        char ch =a[0][i];
////        bool match =true;
////
////        for(int j=1;j<n;j++){
////             if(a[j].size()<i || ch!=a[j][i]  ){
////                 match = false;
////                 break;
////             }
////        }
////        if(match==false){
////            break;
////        }
////        else{
////            ans.push_back(ch);
////        }
////
////    }
////    cout<<ans;
//}