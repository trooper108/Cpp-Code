#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int isp = n-2;
    int star = 1;
    for(int i = 1 ; i <= (n/2)+1; i++){
        for(int j = 1 ; j <= star ; j++){
            cout << star;
        }
        for(int j = 1 ; j <= isp ; j++){
            cout << "-";
        }
        if(isp <= 0){
            
            star--;
        }
        for(int j = 1 ; j <= star ; j++){
            cout << star;
        }
        isp -=2;
        star++;
        cout<<endl;
    }
    return 0;
}