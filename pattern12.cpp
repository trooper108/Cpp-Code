//   1
//  232
// 34543
//  232
//   1



#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int outerSpaccing = n/2;
    int star = 1;
    int count = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= outerSpaccing; col++)
        {
            cout << " ";
        }
        for(int col = 1 ; col <= star ; col++){
            cout << count;
        }
        if(row <= (n/2)){
            outerSpaccing--;
            star += 2;
        }
        else{
            outerSpaccing++;
            star -=2;
        }
        cout << endl;
    }
}