#include<iostream>
#include<vector>
using namespace std;

int findEle(vector<int> vec, int num){
    for(int i = 0 ; i < vec.size(); i++){
        if(vec[i] == num){
            return i;
        }
    }
    return -1;
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
    int num;
    cin >> num;
    cout << findEle(vec,num) <<endl;
    return 0;
}