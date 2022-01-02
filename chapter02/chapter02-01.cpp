//
// 题目： 显示姓名和地址
//
// 问题：
// - 中文乱码： https://www.zhihu.com/question/421326588
#include <iostream>

int main()
{
    using namespace std;
    system("chcp 65001");
//    setlocale(LC_ALL, "zh-CN");
    cout << "My name is coder\n";
    cout << "My address is beijing\n";
    cout << "我是小码匠";
    cout << "我家住在北京市";
    return 0;
}