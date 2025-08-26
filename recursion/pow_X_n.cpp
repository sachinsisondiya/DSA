#include<iostream>
using namespace std;
double pow( double x , int n , double sum){

    if(n==0){
        return sum;
    }
    sum = sum * x;
   return  pow(x , n-1 , sum);
}
int main(){
    int n;
    double x;
    cin>>x>>n;

    double ans=  pow(x ,n, 1);
    cout<<ans;
    return 0;
}