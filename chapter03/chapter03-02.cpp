// 小码匠和老码农：一对爱逗比、爱编程、爱分享父女，关注小码匠和老码农，一起分享知识，一起精进技术
// - 微信公众号： 搜索【小码匠和老码农】
// - 小码匠和老码农： http://www.coder-oldgeek.com/
// - 知乎： https://www.zhihu.com/people/coder-oldgeek
// - B站： https://space.bilibili.com/1511015660
//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：3.7.2
//
// 参考资料列表：
//
#include <iostream>
#include <cmath>
using namespace std;
const int convert_height_inch = 12;
const double convert_height = 0.0254;
const double convert_weight = 2.2;
int main()
{
    int ft, inch, weight;
    cin >> ft;
    cin >> inch;
    cin >> weight;
    cout << "Your BIM is " << sqrt((ft / convert_height_inch + inch) * convert_height) / (weight / convert_weight);
    return 0;
}
