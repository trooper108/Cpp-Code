#include<iostream>
using namespace std;

void fact(int n){
    if(n == 0){
        return 1;
    }
    
    return n * fact(n-1);
    
}

int main(){
    int n = 7;
    // cin  >> n;
    cout << fact(n);
    return 0;
}