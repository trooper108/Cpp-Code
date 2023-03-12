#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void Segarated(vector<int> &arr)
{
    int p1 = -1;
    int p2 = arr.size() - 1;
    int i = 0;
    while (i <= p2)
    {
        if (arr[i] ==  0)
        {
            swap(arr, ++p1, i);
            i++;
        }
        else if(arr[i] == 2){
            swap(arr, p2--, i);
        }
        else{
            i++;
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