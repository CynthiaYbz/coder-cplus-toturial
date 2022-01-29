//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：4.13.1
//
// 参考资料列表：
//
//
#include <iostream>
using namespace std;
int main()
{
    const int len = 20;
    char first_name[len];
    char last_name[len];
    char letter_grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(first_name,len);

    cout << "What is your last name? ";
    cin.getline(last_name,len);

    cout << "What letter grade do you deserve? ";
    cin >> letter_grade;

    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(letter_grade + 1) << endl;
    cout << "Age: " << age;

    return 0;
}

