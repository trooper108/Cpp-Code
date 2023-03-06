#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        // int temp = arr[low];
        // arr[low] = arr[high];
        // arr[high] = temp;
        // low++;
        // high--;
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}