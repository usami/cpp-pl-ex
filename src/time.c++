#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
  int s = 1;
  auto t0 = high_resolution_clock::now();
  for (int i = 1; i != 100; ++i) {
    s += i;
  }
  auto t1 = high_resolution_clock::now();
  cout << "sum: " << s << " time: " << duration_cast<nanoseconds>(t1-t0).count()
      << " nsec\n";
}

