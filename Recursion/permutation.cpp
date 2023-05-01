#include<iostream>
#include<string>
using namespace std;

int permut(string ip , string op){
    if(ip.size() == 0){
        cout << op <<endl;
        return 1;
    }
        int count = 0;
    for(int i = 0 ; i < ip.size(); i++){
        char c = ip[i];
        string ip1 = ip.substr(0,i)+ip.substr(i+1);
        count += permut(ip1,op+c);
    }
    return count;
}

int main(){
    cout<< permut("abc","");
    return 0;

}