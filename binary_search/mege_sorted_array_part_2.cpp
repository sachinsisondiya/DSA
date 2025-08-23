//#include<iostream>
//using namespace std;
//int main(){
//    int n, m , k;
//    cin>>n>>m>>k;
//    int a[10];
//    int b[10];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int i=0;i<m;i++){
//        cin>>b[i];
//    }
//    int la  =0;
//    int lb = 0;
//    int cnt = 0;
//    while(la < n && lb < m){
//
//        if(a[la] < b[lb]) {
//            la++;
//            cnt++;
//            if (cnt == k) {
//                cout << a[cnt - la - 1];
//                return 0;
//            }
//        }
//            else{
//                lb++;
//                cnt++;
//                if(cnt ==  k){
//                    cout<<b[cnt-lb -1];
//                    return 0;
//                }
//            }
//    }
//    while(la < n){
//        la++;
//        cnt++;
//        if(cnt ==  k){
//            cout<<a[cnt-la -1];
//            return 0;
//        }
//    }
//    while(lb < m){
//        lb++;
//        cnt++;
//        if(cnt ==  k){
//            cout<<b[cnt-lb -1];
//            return 0;
//        }
//    }
//    return -1;
//
//}