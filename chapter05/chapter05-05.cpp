//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.5
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int money[12];
    int num = 0;
    string month[12] = {"Jan","Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for(int i = 0; i < 12; i++){
        cout << month[i] << ":" << endl;
        cin >>money[i];
        num += money[i];
    }
    cout << num;
    return 0;
}
