#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n; j++){
            for(int k = i ; k <= j ; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}