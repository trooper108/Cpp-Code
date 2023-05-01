// Codeforces Round 866 (Div. 2)
// Problem A

#include<iostream>
#include<string>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
      
        int i = 0;

        int n = s.length();
        if(n == 1){
            if(s[0] == '^'){
                count++;
            }
        }
        char prev = '^';
        while (i<n)
        {  
            if(i == 0 && s[i] !='^'){
                count++;
            }
            if(s[i] == '_' && i == n-1){
                count++;
            }
            if(prev == '_' && s[i] == '_' ){
                count++;
            }
            prev = s[i];
            i++;
        }
        cout << count <<endl;
    }
    return 0;
}