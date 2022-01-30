//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.1
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num_first, num_last;
    int return_num = 0;
    cout << "Please input first number:";
    cin >> num_first;
    cout << "Please input last number:";
    cin >> num_last;
    for (int i = num_first; i <= num_last; i++)
        return_num = return_num + i;
    cout << "The sum is " << return_num;
    return 0;
}
