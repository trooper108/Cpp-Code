#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s = "aaaaafgujhbvihfszasftyhbd";
    unordered_map<char,int> ump;

    for(int i =0 ;i < s.size();i++){
        ump[s[i]]++;
    }
    for(auto p : ump){
        cout << p.first << " "<< p.second <<endl;
    }
    return 0;


}