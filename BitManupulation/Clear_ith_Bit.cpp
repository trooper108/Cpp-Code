#include<iostream>
using namespace std;

int main(){
    int n ,i;
    cin >> n >> i;
    int k = 1;
    k = k<<i;
    k = ~k;

    cout << (n&k) <<endl;
}