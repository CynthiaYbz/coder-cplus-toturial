//
// Created by 万万的妹妹 on 2022/1/2.
//
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long world, country;
    double a = 31078378100 / 6898758899;
    cout << setiosflags(ios::fixed) << setprecision(3) << std::fixed << 3107837810 / 6898758899;
    cout << 310783781 / 6898758899;
    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the population of the country: ";
    cin >> country;
    double percent = country / world * 100;

    cout << "The population of the country is " << percent << "% of the world population.";
    return 0;
}
