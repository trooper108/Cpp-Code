#include<iostream>
using namespace std;

class queue{
    private:
        int* arr;
     
        int size = 100000;
    public:
           int f = -1;
        int b = -1;
        queue(){
            arr = new int [10000];
        }
        queue(int n){
            size = n;
            arr = new int [n];
        }

        void push(int val){
            b++;
            arr[b] = val;
        }
        void pop(){
            f++;
            
        }
        int front(){
            int q = f;
            q++;
            return arr[q];
        }
        int back(){
            int q = b;
            return arr[q];
        }
};

int main(){
    queue que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);

    cout << que.front()<<endl;
    cout << que.back()<<endl;
    while(que.f != que.b){
        cout << que.front()<<endl;
        que.pop();
    }

}
