//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.3
//
// 参考资料列表：
//
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    const int len = 20;
    char first_name[len];
    char last_name[len];

    cout << "Enter your first name: ";
    cin.getline(first_name,len);

    cout << "Enter your last name: ";
    cin.getline(last_name,len);

    char name[len*2];

    strcpy(name, last_name);
    strcat(name, ", ");
    strcat(name, first_name);

    cout << "Here's the information in a single string: " << name;

    return  0;
}
