#include <iostream>
#include <regex>

using namespace std;

int main()
{
  regex decimal_pat(R"(-?\d+(\.\d+)?)");

  int lineno = 0;
  for (string line; getline(cin, line);) {
    ++lineno;
    smatch matches;
    if (regex_search(line, matches, decimal_pat))
      cout << lineno << ": " << matches[0] << endl;
  }
}
