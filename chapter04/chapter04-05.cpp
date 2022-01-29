//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.5
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
    CandyBar snack = {
            "Mocha Munch",
            2.3,
            350
    };
    cout << "Brand: " << snack.brand << endl;
    cout << " Weight: " << snack.weight << endl;
    cout << " Calorie: " << snack.calorie;
    return  0;
}