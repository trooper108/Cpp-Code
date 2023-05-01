#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin >> n >> i;
    int k = 1;
    k =  k << i;
    cout << k<<endl;
    if((n&k) == 0){
        cout <<"Not Set"<<endl;
    }
    else{
        cout << "Bit Set" << endl;
    }
}