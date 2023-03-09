#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &vec, int si, int ei)
{

    while(si<ei){
        int temp = vec[si];
        vec[si] = vec[ei];
        vec[ei] = temp;
        si++;
        ei--;
    }
    return;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    k = k % n;
    reverse(arr, 0 , n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(auto it : arr){
        cout << it<< " ";
    }
    cout << endl;
    return 0;
}