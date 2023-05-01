#include <iostream>
using namespace std;
class stk
{
public:
    int *arr;
    int size;
    int top = -1;

    int tp()
    {
        return arr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }

    bool isFull()
    {
        if (top == size)
        {
            return 1;
        }
        return 0;
    }
    void push(int k)
    {
        if (isFull())
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = k;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
           top--;
        }
    }
};

int main()
{
    stk st;
    st.size = 80;
    st.arr = new int[st.size];
    st.pop();
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    
    cout << st.tp()<<endl;
    st.pop();
    cout << st.tp();
}