//#include<iostream>
//using namespace std;
//int main(){
//    string s;
//    getline(cin,s);
//    int sum = 0;
//    for(int i=0;i<s.length();i++){
//        char ch = s[i];
//
//        if(ch == 'I'){
//            if(s[i+1] == 'V'){
//                sum += 4;
//                i +=1;
//                cout<<"IV"<<"added to 4"<<endl;
//            }
//            else if(s[i+1] == 'X'){
//                sum += 9;
//                i +=1;
//                cout<<"IX"<<"added to 9"<<endl;
//            }
//            else{
//                sum += 1;
//            }
//        }
//        else if(ch == 'X'){
//            if(s[i+1] == 'L'){
//                sum += 40;
//                i +=1;
//                cout<<"XL"<<"added to 40"<<endl;
//            }
//            else if(s[i+1] == 'C'){
//                sum += 90;
//                i +=1;
//                cout<<"XC"<<"added to 90"<<endl;
//            }
//            else{
//                sum += 10;
//                cout<<"X"<<"added to 10"<<endl;
//            }
//        }
//        else if( ch == 'C'){
//            if(s[i+1] == 'D'){
//                sum += 400;
//                i +=1;
//                cout<<"CD"<<"added to 400"<<endl;
//            }
//            else if(s[i+1] == 'M'){
//                sum += 900;
//                i +=1;
//                cout<<"CM"<<"added to 900"<<endl;
//            }
//            else{
//                sum += 100;
//                cout<<"C"<<"added to 100"<<endl;
//            }
//        }
//        else if(ch == 'V'){
//            sum += 5;
//            cout<<"V"<<"added to 5"<<endl;
//        }
//        else if(ch == 'L'){
//            sum += 50;
//            cout<<"L"<<"added to 50"<<endl;
//        }
//        else if(ch == 'D'){
//            sum += 500;
//            cout<<"D"<<"added to 500"<<endl;
//        }
//        else if(ch == 'M'){
//            sum += 1000;
//            cout<<"M"<<"added to 1000"<<endl;
//        }
//    }
//    cout<<sum;
//}