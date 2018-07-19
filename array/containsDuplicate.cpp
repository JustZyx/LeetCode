//
// Created by 庄永新 on 2018/6/14.
//

#include <set>
#include <vector>
#include <iostream>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> s(nums.begin(), nums.end());
    if (s.size() < nums.size()) {
        return true;
    }
    return false;
}

int main()
{
    vector<int> v1 = {1,3,2,4};
    cout << containsDuplicate(v1) << endl;

    return 0;
}