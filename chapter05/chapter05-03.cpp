//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.3
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 0;
    int input_number;
    for (int i = 1; i != 0; i = input_number){
        cin >> input_number;
        num += input_number;
        cout << num << endl;
    }
    return 0;
}
