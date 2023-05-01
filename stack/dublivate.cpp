#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool dublicate(string s)
{
    int n = s.length();
    stack<char> st;
    int i = 0;
    while (i < n)
    {
        if (s[i] != ')')
        {
            st.push(s[i]);
        }
        else
        {
            char c = st.top();
            if (c == '(')
            {
                return false;
            }
            while (c != '('){
                c = st.top();
                st.pop();
            }
        }
        i++;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    cout << dublicate(s)<<endl;
}