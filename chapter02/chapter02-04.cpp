//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：2.7.4
//
// 参考资料列表：
//
#include <iostream>
#include <cmath>
int main()
{
    int age;
    std::cout <<  "Enter your age: ";
    std::cin >> age;
    int months;
    months = age * 12;
    std::cout << "Your age in months is " << months;
    return 0;
}
