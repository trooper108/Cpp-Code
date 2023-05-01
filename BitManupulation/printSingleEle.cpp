#include<iostream>
#include<vector>
using namespace std;

// arr[] = {2,2,1,4,5,6,5,,4,6,7,7}
// all ele occurs two times except one
// print singly occurs ele


int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0 ; i < n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int xr = 0;
    for(int i = 0 ; i< n;i++){
        xr = (xr) ^ (arr[i]);
    }
    cout << xr << endl;
}