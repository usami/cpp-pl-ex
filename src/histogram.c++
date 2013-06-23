#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()
{
  default_random_engine re;
  normal_distribution<double> dist(15.0, 5.0);
  auto rnd = bind(dist, re);

  vector<int> histogram(30);
  for (int i = 0; i != 1000; ++i) {
    double num = rnd();
    if (num >= 0 && num < 30)
      ++histogram[int(num)];
  }

  for (int i = 0; i != histogram.size(); ++i) {
    cout << setw(2) << i << setw(0) << '\t';
    for (int j = 0; j != histogram[i]; ++j)
      cout << '*';
    cout << endl;
  }
}
