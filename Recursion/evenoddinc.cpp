#include<iostream>
using namespace std;

void fun(int n){
    if(n == 0){
        return;
    }
    if(n%2 == 0){
        fun(n-1);
        cout << n << endl;
    }
    else{
        cout << n <<endl;
        fun(n-1);
    }    
}
void fun1(int a ,int b){
    if(a > b){
        return;
    }
    if(a%2 == 0){
        cout << a <<endl;
        fun1(a+1,b);
    }    
    else{
        fun1(a+1,b);
        cout << a << endl;
    }
}

int main(){
    int n = 7;
    // cin  >> n;
   fun(10);
   fun1(1,10);
    return 0;
}