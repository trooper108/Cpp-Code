#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxEle(vector<int> vec){
    int mx = vec[0];
    for(int i = 1 ; i < vec.size(); i++){
        if(vec[i]>mx){
            mx = vec[i];
        }
    }
    return mx;
}

int main(){
    vector<int> vec;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x; 
        cin >> x;
        vec.push_back(x);
    }
    cout << maxEle(vec) <<endl;
    return 0;
}