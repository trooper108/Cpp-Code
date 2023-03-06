#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> addArray(vector<int> arr1,vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    int size = max(m,n);
    vector<int> sum (size+1,0);
    int i = n-1;
    int j = m-1;
    int carry = 0;
    while(size >=0){
    int add = 0;
        if(i >= 0){
            add += arr1[i];
        }
        if(j >=0){
            add += arr2[j];
        }
        add += carry;
        sum[size] = (add)%10;
        carry = carry/10;
        i--;
        j--;
        size--;
    }
    size =  sum.size();
    if(sum[0] == 0){
        for(int i = 1 ; i < sum.size(); i++){
            sum[i-1] = sum[i];
        }
        sum.pop_back();
    }
    return sum;
}

// <----------- My approach---------------->
// vector<int> addArray(vector<int> arr1,vector<int>arr2){
//     int n = arr1.size();
//     int m = arr2.size();
//     int size = max(m,n);
//     vector<int> sum (size+1,0);
//     int add = 0;
//     m--;
//     n--;
//     while(m>=0 && n >= 0){
//         add += arr1[n]+arr2[m];
//         sum[size] = add%10;
//         add/=10;
//         size--;
//         m--;
//         n--;
//     }
//     while (m>=0){
//         add += arr2[m];
//         sum[size] = add%10;
//         add /=10;
//         m--;
//         size--;
//     }
    
//     while (n>=0){
//         add += arr1[n];
//         sum[size] = add%10;
//         add /=10;
//         n--;
//         size--;
//     }
//     size =  sum.size();
//     if(sum[0] == 0){
//         for(int i = 1 ; i < sum.size(); i++){
//             sum[i-1] = sum[i];
//         }
//         sum.pop_back();
//     }
//     return sum;
// }

int main()
{
    int n,m;
    cin >> n;
    vector<int> arr1 ,arr2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> sum = addArray(arr1,arr2);
    
    for(int i = 0 ; i < sum.size(); i++){
        cout << sum[i];
    }
    cout << endl;
    
    return 0;
    
}