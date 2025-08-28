//#include<iostream>
//#include<vector>
//using namespace std;
//int subs(vector<int> &a , int k , int  sum ,int index){
//
//    if(index > a.size()){
//        if(sum == k){
//            return 1;
//
//        }
//        else{
//            return 0;
//        }
//    }
//
//    int left = subs(a , k, sum+= a[index] , index +1);
//    int right = subs(a ,k ,sum-=a[index] , index +1);
//
//    return left + right;
//}
//int main(){
//    int n,k;
//    cin>>n>>k;
//    vector<int> a;
//    for(int i=0;i<n;i++){
//        int p;
//        cin>>p;
//        a.push_back(p);
//    }
//
//    int x  = subs( a, k , 0 , 0);
//    cout<<x;
//}