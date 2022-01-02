//
// 编程练习：2.7.6
//
// 参考资料列表：
//
//
#include <iostream>
double convert(double l);
int main()
{
    float light_years;
    std::cout << "Enter the number of light years:";
    std::cin >> light_years;
    float astronomical;
    astronomical = convert(light_years);
    std::cout << light_years << " light yeats = " << astronomical << " astronomical units";
    return 0;
}
double convert(double l)
{
    return 63240 * l;
}