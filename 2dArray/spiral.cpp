#include <iostream>
#include <vector>
using namespace std;

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
vector<int> spiral(vector<vector<int>> res)
{
    int m = res.size();
    int n = res[0].size();

    vector<int> ans(n * m);
    int dir = 1;
    int left = 0, right = n - 1, top = 0, bottom = m - 1;
    int i = 0;
    while (left <= right && top <= bottom)
    {
        if (dir == 1)
        {
            for (int j = left; j <= right; j++)
            {
                ans[i] = res[top][j];
                i++;
            }
            top++;
            dir = 2;
        }
        else if (dir == 2)
        {
            for (int j = top; j <= bottom; j++)
            {
                ans[i] = res[j][right];
                i++;
            }
            right--;
            dir = 3;
        }
        else if (dir == 3)
        {
            for (int j = right; j >= left; j--)
            {
                ans[i] = res[bottom][j];
                i++;
            }
            bottom--;
            dir = 4;
        }
        else
        {
            for (int j = bottom; j >= top; j--)
            {
                ans[i] = res[j][left];
                i++;
            }
            left++;
            dir = 1;
        }
    }

    return ans;
}

int main()
{

    vector<vector<int>> res = {
        {1, 3, 4},
        {5, 6, 8},
        {9, 10, 11}};
    display(res);

    cout << endl;
    vector<int> ans = spiral(res);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}