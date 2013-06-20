#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ifstream ifs;
  ifs.open("ints.txt", ofstream::in);

  int i;
  while (ifs>>i)
    cout << i << ' ';
  cout << '\n';

  ifs.close();
}
