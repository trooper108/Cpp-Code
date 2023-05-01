#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.size();
    for(int len = 1;len <= n;len++){
        for(int i =0 ;i <=n-len;i++){
            cout <<str.substr(i,len)<<endl;
        }
    }
}