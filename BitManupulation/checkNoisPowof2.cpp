#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>  n;
    if((n&(n-1)) == 0){
        cout << "Power Of 2" <<endl;
    }
    else{
        cout << "Not a Power of 2" <<endl;
    }
}