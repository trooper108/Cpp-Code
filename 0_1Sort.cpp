#include<iostream>
#include<vector>
using namespace std;

void Sort(vector<int> &arr){
    int p = -1;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == 0){
            int temp = arr[++p];
            arr[p] = arr[i];
            arr[i] = temp;
        }
    }

}

int main(){
    int n ;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    Sort(arr);
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
}