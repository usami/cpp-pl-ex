#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, const vector<int>& v)
{
  for (auto i : v)
    os << i << ' ';
  return os;
}

int main()
{
  vector<int> v = {5, 9, -1, 200, 0};

  cout << v << '\n';

  sort(v.begin(), v.end());

  cout << v << '\n';
}
