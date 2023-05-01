#include<iostream>
using namespace std;

void display(int arr[] ,int n){
    if(n == 0){
        return;
    }
    cout << arr[0] <<" ";
    display(arr+1,n-1);
    
}
int maxN(int arr[],int n){
    if(n == 1){
        return arr[0];
    }
    return max(arr[0],maxN(arr+1,n-1));
    
}
int minN(int arr[],int n){
    if(n == 1){
        return arr[0];
    }
    return min(arr[0],minN(arr+1,n-1));
    
}

bool find(int arr[],int x ,int n){
    if(n == 0){
        return false;
    }
    if(arr[0] == x){
        return true;
    }
    return find(arr+1,x,n-1);
    
}

int main(){
    int n = 7;
    int arr[] = {1,2,4,15,6,7,8};
    // cin  >> n;
    display(arr,n);
    cout << endl;
    // cout << maxN(arr,n)<<endl;
    // cout << minN(arr,n)<<endl;
    cout << find(arr,5,n)<<endl;
    cout << find(arr,15,n)<<endl;
    cout << find(arr,8,n)<<endl;
    return 0;
}