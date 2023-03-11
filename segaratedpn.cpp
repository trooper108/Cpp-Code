#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int>&arr, int i, int j){
    int temp = arr[i];
    arr[i]  =arr[j];
    arr[j] = temp;
}

void Segarated(vector<int> &arr)
{
    int pivot = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            swap(arr, ++pivot, i);
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    Segarated(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}