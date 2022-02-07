//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：6.11.1
//
// 参考资料列表：
//
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
    char list[20] = {};
    int i = 0;
    char j;
    while (1) {
        cout << "please input: ";
        cin >> j;
        //if (j >= 65 && j <= 90) {
        if (isupper(j)) {
            j += 32;
            list[i] = j;
            i++;
        //} else if (j >= 97 && j <= 122) {
        } else if (islower(j)) {
            j -= 32;
            list[i] = j;
            i++;
        //} else if (j == 64) {
        } else if (j == '@') {
            printf("%s", list);
            break;
        } else {
            continue;
        }
    }
    return 0;
}
