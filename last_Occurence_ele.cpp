#include <iostream>
#include <vector>
using namespace std;

int BinearySearch(vector<int> & arr,int key){
    int si = 0;
    int ei = arr.size()-1;
    int res = -1;
    while(si <= ei){
        int mid = (si+ei)/2;
        if(arr[mid] == key){
            res = mid;
            ei = mid -1;
        }
        else if(arr[mid] > key){
            ei = mid-1;
        }
        else{
            si =mid+1;
        }
    }
    return res;
}

int main()
{
    vector<int> nums1 = {20,20,20,40,60,110,120,130,170};
    for (auto it : nums1)
    {
        cout << it << " ";
    }
    cout <<endl;
    cout << BinearySearch(nums1,20)<< endl;
}