//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：3.7.4
//
// 参考资料列表：
//
#include <iostream>
using namespace std;
const int day = 24;
const int times = 60;
int main()
{
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int days, hours, minutes, second;
    days = seconds / times / times / day;
    hours = (seconds - days) / times / times;
    minutes = ()
    cout << seconds << " seconds = " << days  << " days, " << seconds / times / times << " hours, " << seconds % day % times / times << " minutes, " ;
    cout << seconds % day % times % times / times << "seconds";
    return  0;
}
