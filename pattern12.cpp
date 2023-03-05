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
        int temp = count;
        for(int col = 1 ; col <= star ; col++){
            cout << temp;
            if(col <= star/2){
                temp++;
            }
            else{
                temp--;
            }
        }
        if(row <= (n/2)){
            outerSpaccing--;
            star += 2;
            count++;
        }
        else{
            outerSpaccing++;
            star -=2;
            count--;
        }
        cout << endl;
    }
}