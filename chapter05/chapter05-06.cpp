//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.6
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int money[3][12];
    int num = 0;
    int three_year_money = 0;
    string month[12] = {"Jan","Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 12; j++){
            cout << month[j] << ":";
            cin >> money[i][j];
            num += money[i][j];
        }
        three_year_money += num;
    }
    cout << num;
    return 0;
}
