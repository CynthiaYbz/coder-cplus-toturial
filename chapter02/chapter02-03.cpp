// 编程练习：2.7.3
//
// 参考资料列表：
//
//
#include <iostream>
using namespace std;
void one();
void two();
int main()
{
    one();
    one();
    two();
    two();
    return 0;
}
void one()
{
    cout << "Three blind mice" << endl;
}
void two()
{
   cout << "See how they run" << endl;
}
