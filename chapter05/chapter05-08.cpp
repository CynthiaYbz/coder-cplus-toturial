//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：5.9.8
//
// 参考资料列表：
//
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char END_FLAG[20] = {"done"};
    char words[50];
    int i = 0;
    cout << "Enter number of rows: ";
    while (strcmp(END_FLAG, words) != 0) {
        cin >> words;
        cin.get();
        i++;
    }
    cout << "You enered atotal of " << i - 1 << " words";
    return 0;
}
