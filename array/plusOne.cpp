//
// Created by 庄永新 on 2018/7/3.
//

#include <vector>
#include <iostream>

using namespace std;

/**
 * @param digits
 * @return
 * @link https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/27/
 */
vector<int> plusOne(vector<int>& digits) {
    size_t length = digits.size();
    for (size_t i = length - 1; i >= 0; --i) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            digits[i]++;
            break;
        }
    }

    if (digits[0] == 0) {
        digits[0] = 1;
        digits.push_back(0);
    }
    return digits;
}

int main()
{
    vector<int> vector1 = {9};
    plusOne(vector1);
    for (auto i : vector1) {
        std::cout << i << " ";
    }
    return 0;
}