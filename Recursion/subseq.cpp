#include<iostream>
#include<string>
using namespace std;

int subseq(string ip , string op){
    if(ip.size() == 0){
        cout << op << endl;
        return 1;
    }
    int count = 0;
    string op1 = op;
    string op2 = op+ip[0];
    ip.erase(ip.begin());
    count += subseq(ip,op1);
    count += subseq(ip,op2);
    return count;
}

int main(){
    string s = "abc";
    cout << subseq(s," ")<<endl;

}