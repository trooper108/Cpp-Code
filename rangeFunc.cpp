#include<iostream>
using namespace std;

bool range(int num, int low ,int high){
    if(num >= low && num <= high){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num , low ,high;
    cin >> num >> low >> high;
    cout << range(num,low,high) << endl;
    return 0;
}