//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.2
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    string dessert;

    cout << "Enter your name:\n";
    cin >> name;

    cout << "Enter your favorite dessert: \n";
    cin >> dessert;

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << "\n";

    return 0;
}
