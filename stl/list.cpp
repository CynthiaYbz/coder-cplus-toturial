#include <iostream>
#include <list>
using namespace std;

void remove();
void unique();
void print_list(list <int>& v);
void print_list(list <double>& v);

bool single_digit (const int& value) {
    return (value < 70);
}

bool same_integral_part(double first, double second)
{
    return (int(first) == int(second));
}

int main ()
{
    //remove();
    unique();
    return 0;
}

void remove() {
    list<int> user_score= {66, 77, 88, 99, 99, 78, 77};
    user_score.remove(99);

    cout << " lst.remove(v) " << endl;
    for (list<int>::iterator it = user_score.begin(); it != user_score.end(); ++it)
    {
        cout << ' ' << *it << endl;
    }
    cout << " lst.remove_if(f) " << endl;

    user_score.remove_if(single_digit);

    for (list<int>::iterator it = user_score.begin(); it != user_score.end(); ++it)
    {
        cout << ' ' << *it << endl;
    }
}

void unique() {
    list<double> user_score= {85.5, 85, 77.5, 88.5, 99.5, 99.5, 78.5, 77.5, 77};
    // 排序：默认升序
    user_score.sort();

    cout << " sorted = ";
    // 遍历输出现有的元素
    print_list(user_score);

    // 删除相邻重复元素： 99.5
    user_score.unique();

    cout << " deleted after = ";
    // 遍历输出现有的元素
    print_list(user_score);

    // 添加元素 77、77.2
    user_score.push_back(77);
    user_score.push_back(77.2);
    user_score.push_back(77.5);

    // 排序：反转
    user_score.reverse();

    cout << " reverse after = ";
    print_list(user_score);

    // 删除相邻重复元素： 先去整，比较后删除
    user_score.unique(same_integral_part);

    cout << " lst.unique(f) = ";
    print_list(user_score);

}

void print_list(list <int>& v) {
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << ' ' << *i;
    }
    cout << endl;
}

void print_list(list <double>& v) {
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << ' ' << *i;
    }
    cout << endl;
}