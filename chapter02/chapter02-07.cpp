//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：2.7.7
//
// 参考资料列表：
//
#include <iostream>
using namespace std;
void times(int hours, int minutes);
int main()
{
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    times(hours, minutes);
    return 0;
}

void times(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}

