//
// Created by 庄永新 on 2018/6/14.
//

#include <vector>
#include <iostream>

using namespace std;

void reverse(vector<int>& nums, int begin, int end)
{
    while (begin < end) {
        int tmp = nums[begin];
        nums[begin] = nums[end];
        nums[end] = tmp;
        begin++;
        end--;
    }
}

void rotate(vector<int>& nums, int k)
{
    k = k % int(nums.size());
    reverse(nums, 0, int(nums.size() - 1));
    reverse(nums, 0, k - 1);
    reverse(nums, k, int(nums.size() - 1));
}

//void rotate(vector<int>& nums, int k) {
//    for (int i = 0; i < k; ++i) {
//        int _last = nums.back();
//        for (auto j = nums.end() - 2; j >= nums.begin(); --j) {
//            *(j+1) = *j;
//        }
//        *nums.begin() = _last;
//    }
//}



int main()
{
    vector<int> vector1 = {-1,-100,3,99};
    int k = 2;
    rotate(vector1, k);
    for (auto i : vector1) {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}