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

vector<int> diagonal(vector<vector<int>> res){
    int m = res.size();
    int n = res[0].size();
    
    vector<int> ans(m*n);
    int row = 0,col = 0 ,dir = 1;
    for (int i = 0; i < m*n; i++)
    {
        ans[i] = res[row][col];
        if(dir == 1){
            if(col == n-1){
                row++;
                dir = -1;
            }
            else if(row == 0){
                col++;
                dir = -1;
            }
            else{
                row--;
                col++;
            }
        }
        else{
             if(row == m-1){
                col++;
                dir = 1;
            }
            else if(col == 0){
                row++;
                dir = 1;
            }
            else{
                row++;
                col--;
            }
        }
    }
    return ans;
    
}

int main(){
    vector<vector<int>> res ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    display(res);
    vector<int> ans = diagonal(res);
    for(int i = 0; i< ans.size();i++){
        cout << ans[i] << " ";
    }
}