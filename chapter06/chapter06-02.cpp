//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：6.11.2
//
// 参考资料列表：
//
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    double donation[10] = {};
    double i;
    int j = 0;
    double sum = 0;
    int num = 0;
    while (1) {
        cin >> i;
        if (isdigit(i)) {
            donation[j] = i;
            sum += i;
            j++;
        } else {
            break;
        }
    }
    double avg = sum / (j + 1);
    for (int a = 0; a < j + 1; a++) {
        if (donation[a] > avg)
            num += 1;
    }
    cout << "avg: " << avg << endl;
    cout << "this donation have " << num << "bigger avg";
    return 0;
}