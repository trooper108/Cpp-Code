#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int s = 0;
    int e = str.size()-1;
    while(s<=e){
        char c = str[s];
        str[s] = str[e];
        str[e] = c;
        s++;
        e--;
    }    
    cout <<str << endl;
    return 0;
}