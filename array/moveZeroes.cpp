//
// Created by 庄永新 on 2018/7/3.
//

#include <vector>
#include <iostream>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int _index = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i]) {
            nums[_index++] = nums[i];
        }
    }
    while (_index < nums.size()) {
        nums[_index++] = 0;
    }
}

int main()
{
    vector<int> vec = {0, 0, 1};
    moveZeroes(vec);
    for (auto i : vec) {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}