#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // for(int i= n; i >= 1 ; i--){
    //     for(int j = 1 ; j <= n ; j++){
    //         if(i == j){
    //             cout<<"*";
    //         }
    //         else{
    //             cout <<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    for(int i= 1; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i+j == n+1){
                cout<<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}