//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.10
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = row; i > 0; i--){
        cout << endl;
        for(int j = i - 1; j > 0; j--)
            cout << ".";
        for(int s = 1; i - 1 + s <= row ;s++)
            cout << "*";
    }
    return 0;
}