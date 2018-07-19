//
// Created by 庄永新 on 2018/7/4.
//

#include <map>
#include <string>
#include <iostream>

using namespace std;

int firstUniqChar(string s) {
    map<char, int> m;
    for (char c : s) {
        m[c]++;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (m[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s = "leetcode";
    cout << firstUniqChar(s) << endl;

    return 0;
}