#include<bits/stdc++.h>
using namespace std;

// void print1(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
// }

// int main(){
//     print1();

// }
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//      print1(n);
// }
//pattern 2 
// *
// **
// ***
// ****
// *****


// void print2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//     }
//     cout<<endl;
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin<<n;
//         print2(n);
//     }



// }
//pattern 3
// 5

    void print3(int n){
        for(int i=1;i<n;i++){
            for (int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    int main(){
        int t;
        cin>>t;
        for(int i=0;i<t;i++){
            int n;
            cin>>n;
            print3(n);
        }
    }

