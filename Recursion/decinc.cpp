#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    cout << n <<endl;
    print(n-1);
    cout<< n << endl;
    return;
}

int main(){
    int n = 7;
    // cin  >> n;
    print(n);
    return 0;
}