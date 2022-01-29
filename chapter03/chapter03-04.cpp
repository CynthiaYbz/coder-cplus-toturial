// 小码匠和老码农：一对爱逗比、爱编程、爱分享父女，关注小码匠和老码农，一起分享知识，一起精进技术
// - 微信公众号： 搜索【小码匠和老码农】
// - 小码匠和老码农： http://www.coder-oldgeek.com/
// - 知乎： https://www.zhihu.com/people/coder-oldgeek
// - B站： https://space.bilibili.com/1511015660
//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：3.7.4
//
// 参考资料列表：
//
#include <iostream>
using namespace std;
const int day = 24;
const int times = 60;
int main()
{
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int days, hours, minutes, second;
    days = seconds / times / times / day;
    hours = (seconds - days) / times / times;
    minutes = ()
    cout << seconds << " seconds = " << days  << " days, " << seconds / times / times << " hours, " << seconds % day % times / times << " minutes, " ;
    cout << seconds % day % times % times / times << "seconds";
    return  0;
}
