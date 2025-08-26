#include<iostream>
#include<stack>
using namespace std;
void rev(stack<int> &a){
    if(a.empty()){
        return ;
    }
    int b = a.top();
    a.pop();
    rev(a);
    a.push(b);
}
int main(){
    int n;
    cin>>n;
    stack<int> a;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push(k);
    }
    rev(a);
    for(int i =0;i<n;i++){
        cout<<a.top();
        a.pop();
    }
    return 0;
}