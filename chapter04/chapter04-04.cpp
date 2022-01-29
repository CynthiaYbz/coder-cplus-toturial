//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.4
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first_name;
    string last_name;

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    string name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << name;
    return  0;
}
