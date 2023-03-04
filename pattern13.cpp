// *          *
// *          *
// *    *     *
// *  *    *  *
// *          *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s1 = (n / 2) + 1;
    int s2 = (n / 2) + 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col == 1 || col == n)
            {
                cout << "*";
            }
            
            
            if (row > n / 2 && (col == s1 || col == s2))
            {
                cout << "* ";
                s1++;
                s2--;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}