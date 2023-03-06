#include <iostream>
#include <vector>
using namespace std;

vector<int> subofArray(vector<int> arr1, vector<int> arr2)
{
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;

    int k = max((arr1.size()), (arr2.size()));

    vector<int> res(k);
    k--;
    while (k >= 0)
    {
        if (arr1[i] < arr2[j])
        {
            arr1[i - 1]--;
            arr1[i] += 10;
        }
        if (j >= 0)
        {

            res[k] = arr1[i] - arr2[j];
            j--;
        }
        else
        {
            res[k] = arr1[i];
        }
        k--;
        i--;
    }
    if (res[0] == 0)
    {
        for (int i = 1; i < res.size(); i++)
        {
            res[i - 1] = res[i];
        }
        res.pop_back();
    }
    return res;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> arr1, arr2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> res;
    if (n == m)
    {
        if (arr1[0] > arr2[0])
        {
            res = subofArray(arr1, arr2);
        }
        else
        {
            res = subofArray(arr2, arr1);
        }
    }
    else if (n > m)
    {
        res = subofArray(arr1, arr2);
    }
    else
    {
        res = subofArray(arr2, arr1);
    }

    for (auto it : res)
    {
        cout << it;
    }
    cout << endl;
    return 0;
}