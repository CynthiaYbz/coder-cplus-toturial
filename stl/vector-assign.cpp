// list::assign
using namespace std;
#include <iostream>
#include <list>

void print_list(list <int>& v);

int main ()
{
  list<int> first;
  list<int> second;

  first.assign (7,100);                      // 7 ints with value 100
  print_list(first);

  second.assign (first.begin(),first.end()); // a copy of first
  print_list(second);

  int myints[]={1776,7,4};
  first.assign (myints,myints+3);            // assigning from array
  print_list(first);

  cout << "Size of first: " << int (first.size()) << '\n';
  cout << "Size of second: " << int (second.size()) << '\n';
  return 0;
}

void print_list(list <int>& v) {
    cout << "--------------------------start--------------------------" << endl;
    for(auto i = v.begin(); i != v.end(); i++) {
        cout << *i << endl;
    }
    cout << "--------------------------end--------------------------" << endl;
}