#include<iostream>
using namespace std;

bool palindrome(int num){
    int n = num;
    int newNum = 0;
    while(n > 0){
        int lastDigit = n%10;
        n /=10;
        newNum = newNum*10+lastDigit;
    }
    if(newNum == num){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cin >> num;
    cout << palindrome(num) << endl;
    return 0;
}