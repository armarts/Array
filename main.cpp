#include <iostream>
#include "array.h"

int main() {
  try {
  Array<int, 12> a, b;
  a[5] = 6;
  /*for (Array<int, 12>::Iterator i = a.begin(); i != a.end(); ++i)
    std :: cout << *i << " ";*/
  a.fill(-7);
  a.front();
  a.back()--;
  b.fill(3);
  a.swap(b);
  Array<int, 12>::Iterator it(a.begin()), it1(a.end());
  //it1.phi(it);
  throw std::logic_error("Hi Garik!\n");
  for (auto it = a.begin(); it != a.end(); ++it)
    std::cout << *it << " ";

    a[100]++;
  //std::cout << (a.begin());
  //for (Array<int, 12>::Iterator i = a.begin(); i != a.end(); ++i)
  //  std::cout << *i << " ";
} catch(Exception &ex) {
   std::cerr << ex.what();
}
  return 0;
}
