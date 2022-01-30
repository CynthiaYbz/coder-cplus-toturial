//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.2
//
// 参考资料列表：
//
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<long double, 101> number;
    number[0] = 1;
    number[1] = 1;
    cout << "0! = " << number[0] << endl;
    cout << "1! = " << number[1] << endl;
    for (int i = 2; i < 101; i++) {
        number[i] = i * number[i-1];
        cout << i <<"! = " << number[i] << endl;
    }
    return 0;
}
