#include <iostream>
#include <vector>
using namespace std;

int maxEle(vector<int> vec)
{
    int mx = -(int)1e9;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > mx)
        {
            mx = vec[i];
        }
    }
    return mx;
}

vector<int> repeatingEle(vector<int> arr)
{
    int n = maxEle(arr) + 1;
    vector<int> vec(n, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        vec[arr[i]]++;
    }
    vector<int> ele;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > 1)
        {
            ele.push_back(i);
        }
    }
    return ele;
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

    vector<int> ele  = repeatingEle(arr);
    for(auto it : ele){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}