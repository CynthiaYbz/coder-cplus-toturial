//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.7
//
// 参考资料列表：
//
#include <iostream>
using namespace std;
const int size = 40;
struct Pizza
{
    char companyName[size];
    float diameter;
    float weight;
};

int main()
{
    Pizza pizza;
    cout << "Enter the pizza's information: " << endl;
    cout << "Pizza's Company: ";
    cin.getline(pizza.companyName, SIZE);

    cout << "Pizza's diameter(inchs): ";
    cin >> pizza.diameter;

    cout << "CandBar‘s weight（pounds）： ";
    cin >> pizza.weight;

    cout << "The lunch pizza is " << pizza.companyName << endl;
    cout << "And its diameter is " << pizza.diameter << " inch, weight is " << pizza.weight;
    cout << "pounds." << endl;
    return 0;
}