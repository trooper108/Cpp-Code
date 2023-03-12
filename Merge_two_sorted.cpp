#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int j = 0;
    while (j<n)
    {
        int i = m - 1;
        while (i >= 0 && nums1[i] > nums2[j])
        {
            nums1[i + 1] = nums1[i];
            i--;
        }
        nums1[i + 1] = nums2[j];
        j++;
        m++;
    }
}


int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,4,6};

    merge(nums1,3,nums2,3);
    for (auto it : nums1)
    {
        cout << it << " ";
    }
    cout << endl;
}