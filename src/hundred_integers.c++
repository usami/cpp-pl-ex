#include <fstream>

using namespace std;

int main()
{
  ofstream ofs;
  ofs.open("ints.txt", ofstream::out | ofstream::app);

  for (int i = 0; i != 200; ++i)
    ofs << i << '\n';

  ofs.close();
}
