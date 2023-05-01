#include<iostream>
#include<vector>
using namespace std;

int longest_substr(string str){
    int i = 0;
    int j = 0;
    int n = str.size();
    int count = 0;
    int len = 0;
    vector<int>s(128,0);
    while (j<n)
    {
        s[str[j]]++;
        if(s[str[j]] > 1){
            count ++;
        }
        while(count > 0){
            if(s[str[i]] > 1){
                count--;
            }
            s[str[i]]--;
            i++;
        }
        len = max(len,j-i+1);
        j++;
    }
    return len;
}

int main(){
    string str;
    cin >> str;
    cout << longest_substr(str)<<endl;
}