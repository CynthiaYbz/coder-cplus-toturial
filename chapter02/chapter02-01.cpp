//
// 题目： 显示姓名和地址
//
// 问题：
// - 中文乱码： https://www.zhihu.com/question/421326588
#include <iostream>

int main()
{
    system("chcp 65001");
    std::cout << "My name is Cynthia.";
    std::cout << "我叫靳灏芊，我家住北苑家园";
    return 0;
}



