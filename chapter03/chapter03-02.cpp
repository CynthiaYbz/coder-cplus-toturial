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
