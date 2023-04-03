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
vector<vector<int>> rotate(vector<vector<int>> res)
{
    int m = res.size();
    int n = res[0].size();

    vector<vector<int>> ans(n,vector<int>(m,0));
    for(int i = 0; i< m;i++){
        for(int j = 0; j<n;j++){
            ans[j][i] = res[i][j];
        }
    }
    int col1 = 0;
    int col2 = m-1;
    while(col1< col2){
        for(int i =0;i<n;i++){
            int temp = ans[i][col1];
            ans[i][col1] = ans[i][col2];
            ans[i][col2] = temp;
        }
        col1++;
        col2--;
    }
    return ans;
}

int main()
{

    vector<vector<int>> res = {
        {1, 3, 4},
        {5, 6, 8},
        {9, 10, 11}
    };
    display(res);

    cout<<endl;
    vector<vector<int>> ans = rotate(res);
    display(ans);
    return 0;
}