//
// Created by 庄永新 on 2018/6/14.
//

#include <iostream>
#include <vector>

using namespace std;

//从排序数组中删除重复项
//给定 nums = [0,0,1,1,1,2,2,3,3,4],
//函数应该返回新的长度 5, 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4。
//你不需要考虑数组中超出新长度后面的元素。

int removeDuplicates(vector<int> &nums) {
    //nums为空
    if (!nums.size()) {
        return 0;
    }

    int cnt = 1; //记录不同元素的个数
    for (auto iter = nums.begin() + 1; iter != nums.end(); ++iter) { //从第二个元素开始遍历
        if (*iter != *(iter - 1)) {
            ++cnt;
            nums[cnt - 1] = *iter;
        }
    }
    return cnt;
}

int main() {
    vector<int> v1 = {};
    cout << removeDuplicates(v1) << endl;

    vector<int> v2 = {1, 1, 2};
    cout << removeDuplicates(v2) << endl;

    return 0;
}