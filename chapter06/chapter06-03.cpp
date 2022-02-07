//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：6.11.3
//
// 参考资料列表：
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    char choice;
    while (1) {
        cout << "Please input your choice: ";
        cin >> choice;
        if (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g') {
            cout << "That's not a choice.\n";
        } else{
            break;
        }
    }
    switch (choice) {
        case 'c':
            cout << "Let's have carnivore";
            break;
        case 'p':
            cout << "You can be a pianist";
            break;
        case 't':
            cout << "A  maple is a tree";
            break;
        case 'g':
            cout << "We can play game together";
            break;
        default :
            cout << "That's not a choice.\n";
            return 0;
    }
}