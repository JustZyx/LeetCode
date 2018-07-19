//
// Created by 庄永新 on 2018/5/11.
//

#include <iostream>
#include <vector>
using namespace std;

// 递归
int fibonacci(int n)
{
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 递推求解
int fibonacci_(int n)
{
    vector<int> vec = {0, 1};
    for (size_t i = 2; i <= n; ++i) {
        vec[i] = vec[i - 1] + vec[i - 2];
    }
    return vec[n];
}

// 扩展问题: A(0)=1, A(1)=2, A(2)=2, n>2都有A(k)=A(k-1)+A(k-2)+A(k-3)
// 考虑溢出问题
int sumOfA(int n)
{
    long long res[n];
    res[0] = 1;
    res[1] = 2;
    res[2] = 2;
    for (int i = 3; i <= n; ++i) {
        res[i] = res[i-1] + res[i-2] + res[i-3];
    }
    return res[n];
}

// main函数入口
int main()
{
    // f0=0,f1=1,f2=1,f3=2,f4=3,f5=5
    int res = fibonacci(9);
    int res_ = fibonacci_(9);
    int sixty = sumOfA(35);

    cout << "递推第8项的值为：" << res << endl;
    cout << "递推第8项的值为：" << res << endl;
    cout << "60项的值为：" << sixty << endl;

    return 0;
}