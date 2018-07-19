//
// Created by 庄永新 on 2018/6/15.
//

#include <vector>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> _target;
    if (nums.size() == 0 || nums.size() == 1) {
        return _target;
    }

    for (int i = 0; i != nums.size(); ++i) {
        for (int j = i + 1; j != nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                _target.push_back(i);
                _target.push_back(j);
            }
        }
    }
    return _target;
}

int main() {
    vector<int> vector1 = {2, 7, 11, 15};
    int target = 9;


    vector<int> vector2 = twoSum(vector1, target);
    for (auto i : vector2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}