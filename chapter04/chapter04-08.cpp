//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.8
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 40;

struct Pizza
{
    char companyName[SIZE];
    float diameter;
    float weight;
};

int main()
{
    Pizza * pizza = new Pizza;
    cout <<"Enter the Pizza's information: " << endl;

    cout << "Pizza's diameter(inchs): ";
    cin >> (*pizza).diameter;
    //cin.getline(pi->companyName, 20);

    cout << "Pizza’s Comapny： ";
    cin.getline((*pizza).companyName, SIZE);

    cout << "CandBar's weights): ";
    cin >> (*pizza).weight;

    cout << "The lunch pizza is " << (*pizza).companyName << "." << endl;
    cout << "And its diameter is " << (*pizza).diameter << " inch, weight is " << pizza->weight;
    cout << "pounds. " << endl;

    delete pizza;

    return 0;
}
