//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.4
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    float Daphne_money = 100;
    float Cleo_money = 100;
    int i;
    for (i = 1; Cleo_money <= Daphne_money; i++){
        Daphne_money = Daphne_money + 10;
        Cleo_money = Cleo_money * 1.05;
    }
    cout << i;
    return 0;
}
