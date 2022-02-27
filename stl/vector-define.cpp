//
// 读书： C++ Primer Plus（第6版）中文版
// 编程练习：
//
// 参考资料列表：
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print_vector(vector <int>& v);
void print_vector(vector <string>& v);
int main()
{

    // 定义一个存储学生年龄的int类型元素的vector容器
    vector<int> ages;
    print_vector(ages);

    // 定义个存储学生姓名的string类型的vector容器
    vector<string> user_name = {"zhangsan", "lisi", "wangwu", "muzili"};
    print_vector(user_name);

    // 初始化一个元素大小为25的学生姓名vector容器, 默认每个元素为空字符串
    vector<string> user_name02(25);
    print_vector(user_name02);

    // 初始化一个元素大小为25的学生姓名vector容器, 默认每个元素为空字符串
    vector<string> ages02(25);
    print_vector(ages02);

        // 初始化一个元素大小为25的学生姓名vector容器, 默认每个元素为空字符串
    vector<int> ages03(25, 10);
    print_vector(ages03);

    return 0;
}

void print_vector(vector <int>& v) {
    cout << "--------------------------start--------------------------" << endl;
    cout << "size is :" << v.size() << endl;
    cout << "capacity is :" << v.capacity() << endl;

    for(auto i = v.begin(); i < v.end(); i++) {
        cout << *i << endl;
    }
    cout << "--------------------------end--------------------------" << endl;
}

void print_vector(vector <string>& v) {
    cout << "--------------------------start--------------------------" << endl;
    cout << "size is :" << v.size() << endl;
    cout << "capacity is :" << v.capacity() << endl;

    for(auto i = v.begin(); i < v.end(); i++) {
        cout << *i << endl;
    }
    cout << "--------------------------end--------------------------" << endl;
}