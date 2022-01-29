//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.6
//
// 参考资料列表：
//
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string brand;
    float weight;
    int calorie;
};

int main()
{
    CandyBar candyBar[4] = {
            {
                    "Mocha Munch",
                    2.3,
                    350
            },
            {
                    "Mocha Munch2",
                    3.3,
                    250
            },
            {
                    "Mocha Munch 3",
                    4.3,
                    150
            }
    };
    cout << "CandyBar-1: Brand=" << candyBar[0].brand << " Weight = " << candyBar[0].weight << " Calorie = " << candyBar[0].calorie << endl;
    cout << "CandyBar-2: Brand=" << candyBar[1].brand << " Weight = " << candyBar[1].weight << " Calorie = " << candyBar[1].calorie << endl;
    cout << "CandyBar-3: Brand=" << candyBar[2].brand << " Weight = " << candyBar[2].weight << " Calorie = " << candyBar[2].calorie << endl;
    cout << "CandyBar-4: Brand=" << candyBar[3].brand << " Weight = " << candyBar[3].weight << " Calorie = " << candyBar[3].calorie << endl;
    return  0;
}