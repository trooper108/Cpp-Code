#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n , t;
        cin >> n >> t;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i < n;i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n;i++){
            cin >> b[i];
        }
        int i = 0;
        int mx = 0;
        int idx = -1;
        while(i < n){
          
            if (a[i] <= t){
                if( idx == -1 || b[i] > b[idx] ){
                    mx = a[i];
                    idx = i+1;
                }
            }
            i++;
            t--;
        }
        cout << idx << endl;
    }
    return 0;
}