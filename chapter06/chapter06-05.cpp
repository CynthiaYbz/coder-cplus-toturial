//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：6.11.5
//
// 参考资料列表：
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    float money;
    float tax;
    while (money >= 0) {
        cout << "please input money:";
        cin >> money;
        if (money <= 5000 && money >= 0) {
            cout << "No tax" << endl;
            continue;
        } else if (money > 5000 && money <= 15000) {
            tax = (money - 5000) * 0.1;
        } else if (money > 15000 && money <= 35000) {
            tax = (money - 15000) * 0.15 + 10000 * 0.1;
        } else if (money > 35000) {
            tax = (money - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
        } else {
            break;
        }
        cout << "tax is : " << tax << endl;
    }
    return 0;
}
