#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minEle(vector<int> vec){
    int mn = vec[0];
    for(int i = 1 ; i < vec.size(); i++){
        if(vec[i]<mn){
            mn = vec[i];
        }
    }
    return mn;
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
    cout << minEle(vec) <<endl;
    return 0;
}