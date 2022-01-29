// 小码匠和老码农：一对爱逗比、爱编程、爱分享父女，关注小码匠和老码农，一起分享知识，一起精进技术
// - 微信公众号： 搜索【小码匠和老码农】
// - 小码匠和老码农： http://www.coder-oldgeek.com/
// - 知乎： https://www.zhihu.com/people/coder-oldgeek
// - B站： https://space.bilibili.com/1511015660
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
