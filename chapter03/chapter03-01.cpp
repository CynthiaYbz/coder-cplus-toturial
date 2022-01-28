#include <iostream>
using namespace std;
const int convert = 12;
int main()
{
    double inch;
    cout << "Please input you height(inch) : ";
    cin >> inch;
    cout << "You height(ft) is : " << inch/convert << endl;
    return 0;
}
