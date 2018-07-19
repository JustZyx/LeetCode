//
// Created by 庄永新 on 2018/6/15.
//
#include <vector>
#include <iostream>

using namespace std;

int singleNumber(vector<int>& nums) {
    int _singleNum = 0;
    for (auto &i: nums) {
        _singleNum ^= i;
    }
    return _singleNum;
}

int main() {
    vector<int> vec1 = {4,1,2,1,2};
    cout << singleNumber(vec1) << endl;

    vector<int> vec2 = {2,2,1};
    cout << singleNumber(vec2) << endl;

    return 0;
}