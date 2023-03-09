#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> arr ,int k){
    for(int i = 0 ; i < arr.size(); i++)
    {
        if(arr[i] == k){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n , k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

   cout <<  linearSearch(arr,k) <<endl;
}