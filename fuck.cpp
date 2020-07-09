#include <iostream>
#include <tuple>
using namespace std;
int main()
{
  using f = tuple<int, int64_t, void*, char, int64_t, int64_t, int64_t>;
  //f t = {1, 2, nullptr, 'a'};
  string str("handfaetqwqefdfdsfadgqweqwoinosjafodsjfpojqpofjqwessa");
  //cout << sizeof(t) << endl;
  cout << sizeof(f) << endl;
  cout << sizeof(str) << endl;

}