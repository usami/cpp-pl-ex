#include <iostream>
#include <string>

using namespace std;

struct Person {
  string name;
  int age;
};

istream& operator>>(istream& is, Person& p)
// read {"name", age} pair. Note: formatted with { " ", and }
{
  char c, c2;
  if (is>>c && c=='{' && is>>c2 && c2=='"') { // starts with {"
    string name;
    // invariant: read characters before " so far, and appended these to name
    while (is.get(c) && c!='"')
      name += c;

    if (is>>c && c==',') {
      int age = 0;
      if (is>>age>>c && c=='}') {
        p = {name, age};
        return is;
      }
    }
  }
  is.setstate(ios_base::failbit); // register the failure
  return is;
}

ostream& operator<<(ostream& os, const Person& p)
{
  return os << p.name << " (" << p.age << ")";
}

int main()
{
  cout << "Please enter your name and age:"
      << " {\"name\", age}\n";

  Person person;
  if (cin>>person)
    cout << person << '\n';
}
