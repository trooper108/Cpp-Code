#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin >> n >> i;
    int k = 1;
    k =  k << 1;
    if((n&k) ==  0){
        cout << 0<<endl;
    }
    else{
        cout << 1 <<endl;
    }
    return 0;
}