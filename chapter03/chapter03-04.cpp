//
// Created by 万万的妹妹 on 2022/1/2.
//
#include <iostream>
using namespace std;
const int day = 24;
const int times = 60;
int main()
{
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int days, hours, minutes, second;
    days = seconds / times / times / day;
    hours = (seconds - days) / times / times;
    minutes = ()
    cout << seconds << " seconds = " << days  << " days, " << seconds / times / times << " hours, " << seconds % day % times / times << " minutes, " ;
    cout << seconds % day % times % times / times << "seconds";
    return  0;
}
