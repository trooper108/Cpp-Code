#include<iostream>
using namespace std;

int xorOfN(int n){
     if(n%4 == 0){
        return n;
    }
    else if(n%4 == 1){
        return 1;
    }
    else if(n%4 == 2){
        return n+1;
    }
    else if(n%4 == 3){
        return 0;
    }
}

int main(){
    int l,r;
    cin >> l >> r;

    // O(n)
    // int xr = 0;

    // for(int i = 1 ; i<=n;i++){
    //     xr= xr^i;
    // }

    //O(1)
    int x1 = xorOfN(r);
    int x2 = xorOfN(l-1);
    cout << (x1^x2) <<endl;

   return 0;
}