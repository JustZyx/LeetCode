//
// Created by 庄永新 on 2018/6/14.
//

#include <vector>
#include <iostream>

using namespace std;

int maxProfit(vector<int>& prices) {
    //第一天收益为0
    unsigned long _len = prices.size();
    if (_len == 0 || _len == 1) {
        return 0;
    }

    // *iter > *(iter - 1)可以卖出
    int _maxProfit = 0;
    for (auto iter = prices.begin() + 1; iter != prices.end(); ++iter) {
        if (*iter > *(iter - 1)) {
            _maxProfit += (*iter) - (*(iter - 1));
        }
    }
    return _maxProfit;
}

int main() {
    //test1
    vector<int> vec1 = {7,1,5,3,6,4};
    cout << maxProfit(vec1) << endl;

    //test2
    vector<int> vec2 = {1,2,3,4,5};
    cout << maxProfit(vec2) << endl;

    //test3
    vector<int> vec3 = {7,6,4,3,1};
    cout << maxProfit(vec3) << endl;

    return 0;
}