//
// Created by 庄永新 on 2018/6/27.
//

#include <string>
#include <iostream>

using namespace std;

string reverseString(string s) {
    size_t _size = s.size();
    if (_size <= 1) {
        return s;
    }

    for (size_t i = 0; i <= (_size / 2) - 1; ++i) {
        char t = s[i];
        s[i] = s[_size - 1 - i];
        s[_size - 1 -i] = t;
    }
    return s;
}

int main()
{
    string s = "";
    cout << reverseString(s) << endl;

    return 0;
}