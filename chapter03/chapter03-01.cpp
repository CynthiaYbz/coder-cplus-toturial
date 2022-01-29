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
