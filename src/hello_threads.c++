#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void hello()
{
  for(;;) {
    cout << "hello";
    this_thread::sleep_for(chrono::seconds {1});
  }
}
void world()
{
  for(;;) {
    cout << "world!" << endl;
    this_thread::sleep_for(chrono::seconds {1});
  }
}

int main()
{
  thread t1 {hello};
  thread t2 {world};

  t1.join();
  t2.join();
}
