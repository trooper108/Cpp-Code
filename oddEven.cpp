#include<iostream>
using namespace std;

bool evenOdd(int num){
    if(num%2){
        return false;
    }
    return true;
}

int main(){
    int num;
    cin >> num;
    cout<<evenOdd(num) << endl;
    return 0;
}