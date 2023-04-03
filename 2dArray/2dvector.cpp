#include <iostream>
#include <vector>
using namespace std;

void input(vector<vector<int>> &res, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> res[i][j];
        }
    }
}

void display(vector<vector<int>> res)
{

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int maxEle(vector<vector<int>> res)
{
    int maxNum = -1e9;
    for (auto vec : res)
    {
        for (auto ele : vec)
        {
            maxNum = max(maxNum, ele);
        }
    }
    return maxNum;
}

int minEle(vector<vector<int>> res)
{
    int minNum = 1e9;
    for (auto vec : res)
    {
        for (auto ele : vec)
        {

            minNum = min(minNum, ele);
        }
    }
    return minNum;
}

vector<int> find(vector<vector<int>> &res, int key)
{
    vector<int> ans(2, -1);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[0].size(); j++)
        {
            if (key == res[i][j])
            {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}

void print(vector<vector<int>> &res)
{
    for (int i = 0; i < res.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < res[i].size(); j++)
            {
                cout << res[i][j] << " ";
            }
        }
        else
        {
            for (int j = res[i].size() - 1; j >= 0; j--)
            {
                cout << res[i][j] << " ";
            }
        }
    }
} 

void printCol(vector<vector<int>> &res)
{
    for (int j = 0; j < res[0].size(); j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < res.size(); i++)
            {
                cout << res[i][j] << " ";
            }
        }
        else
        {
            for (int i = res.size() - 1; i >= 0; i--)
            {
                cout << res[i][j] << " ";
            }
        }
        // cout << endl;
    }
}

int main()
{
    // int m, n;
    // cin >> m >> n;

    vector<vector<int>> res = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // input(res, m, n);
    display(res);
    // cout << maxEle(res) << endl;
    // cout << minEle(res) << endl;
    // vector<int> ans = find(res, 5);
    // for (auto index : ans)
    // {
    //     cout << index << " ";
    // }
    cout << endl;
    print(res) ;
    cout << endl;
    printCol(res);
    return 0;
}