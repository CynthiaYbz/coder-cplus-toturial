// forward_list::insert_after
#include <iostream>
#include <array>
#include <forward_list>
using namespace std;
int main ()
{
  array<int,3> myarray = { 11, 22, 33 };

  // 初始化
  // 初始化为包含4个元素的int类型forward_list容器
  forward_list<int> first (4);      // 4 ints

  // 初始化为包含3个元素的int类型forward_list容器，初始值：5
  forward_list<int> second (3,5);   // 3 ints with value 5

  // 赋值操作
  first = second;                        // copy assignment

  // 插入操作
  forward_list<int>::iterator it;
  it = first.insert_after ( first.before_begin(), 10 );          // 10

  array<int,3> myarray = { 11, 22, 33 };

  it = first.insert_after ( it, myarray.begin(), myarray.end() ); // 10 20 20 11 22 33

  std::cout << "first: ";
  for (int& x : first) std::cout << ' ' << x;
  std::cout << '\n';

  std::cout << "second: ";
  for (int& x : second) std::cout << ' ' << x;
  std::cout << '\n';




  forward_list<int> mylist;
  forward_list<int>::iterator it;


                                                                   //  ^  <- it
  it = mylist.insert_after ( it, 2, 20 );                          // 10 20 20
                                                                   //        ^
  it = mylist.insert_after ( it, myarray.begin(), myarray.end() ); // 10 20 20 11 22 33
                                                                   //                 ^
  it = mylist.begin();                                             //  ^
  it = mylist.insert_after ( it, {1,2,3} );                        // 10 1 2 3 20 20 11 22 33
                                                                   //        ^

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';
  return 0;
}