//#include<iostream>
//#include<vector>
//using namespace std;
//void rev(vector<int> &a , int low , int high ){
//    if(low >= high){
//        return;
//    }
//    int b = a[low];
//    a[low]  = a[high];
//    a[high] = b;
//    rev(a,++low , --high);
//}
//int main(){
//    int n;
//    cin>>n;
//    vector<int> a;
//    for(int i=0;i<n;i++){
//        int k;
//        cin>>k;
//        a.push_back(k);
//    }
//    rev(a , 0 ,n-1);
//    for(int i=0;i<n;i++){
//        cout<<a[i];
//    }
//    return 0 ;
//}