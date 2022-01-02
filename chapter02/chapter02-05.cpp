//
// 编程练习：2.7.5
//
// 参考资料列表：
//
//
#include <iostream>
float degrees(float c);
int main()
{
    float celsius, fahrenheit;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    fahrenheit = degrees(celsius);
    std::cout << celsius <<" degree Celsius is " << fahrenheit  << " degrees Fahrenheit." << std::endl;
    return  0;
}

float degrees(float c)
{
    return c * 1.8 + 32.0;
}