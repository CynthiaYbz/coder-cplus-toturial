// 小码匠和老码农：一对爱逗比、爱编程、爱分享父女，关注小码匠和老码农，一起分享知识，一起精进技术
// - 微信公众号： 搜索【小码匠和老码农】
// - 小码匠和老码农： http://www.coder-oldgeek.com/
// - 知乎： https://www.zhihu.com/people/coder-oldgeek
// - B站： https://space.bilibili.com/1511015660
//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：3.7.1
//
// 参考资料列表：
//
#include <iostream>
using namespace std;
const int convert = 12;
int main()
{
    double inch;
    cout << "Please input you height(inch) : ";
    cin >> inch;
    cout << "You height(ft) is : " << inch/convert << endl;
    return 0;
}
