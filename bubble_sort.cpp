#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &vec)
{
    for (int i = 0; i < vec.size()-1; i++)
    {
        for (int j = 0; j < vec.size()-1-i; j++)
        {
            if(vec[j]>vec[j+1])
            swap(vec[j], vec[j+1]);
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

    bubbleSort(arr);
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
}