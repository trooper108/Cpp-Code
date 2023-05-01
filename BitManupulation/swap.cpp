#include<iostream>
#include<vector>
using namespace std;

// swap 2 ele using xor
// a = 6 , b = 7;
// a = 7, b= 6;



int main(){
    int a,b;
    cin >> a >> b;

    a = a^b;
    b = a^b;
    a = a^b;
    cout << a << " "<<b;
}