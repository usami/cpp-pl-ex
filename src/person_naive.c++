#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Please enter your name:\n";

  string name;
  getline(cin, name);

  cout << "Please enter your age:\n";

  int age;
  cin >> age;

  cout << "Hello, " << name << " (" << age << ")\n";
}
