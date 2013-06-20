#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, const vector<string>& v)
{
  for (auto i : v)
    os << i << ' ';
  return os;
}

int main()
{
  vector<string> v = {"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};

  cout << v << '\n';

  sort(v.begin(), v.end());

  cout << v << '\n';
}
