//
// Created by 万万的妹妹 on 2022/1/2.
//
#include <iostream>
using namespace std;
const int convert = 60;
int main()
{
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    double degrees;
    cout << " First, enter the degrees: ";
    cin >> degrees;
    double minutes;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    double seconds;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "<< degrees + minutes / convert + seconds / convert << " degrees";
    return 0;
}
