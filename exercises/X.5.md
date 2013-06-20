# X.5 A Tour of C++: Containers and Algorithms

## [2]
* vector<T>
* list<T>
* map<K,V>
* unordered_map<K,V>
* unordered_multimap<K,V>

## [3]
* p=find(b,e,x)
* p=find_if(b,e,f)
* n=count(b,e,x)
* sort(b,e)
* sort(b,e,f)

## [4]
* \<algorithm>
* \<iostream>
* \<string>
* \<unordered_map>
* \<vector>

## [5]
`src/person_naive.c++`

## [6]
`src/person.c++`

```cpp
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
```

## [7]
`src/vector.c++`

## [8]
`src/vector_string.c++`

## [9]
`src/hundred_integers.c++`

### std::ofstream::open
    void open (const string& filename,  ios_base::openmode mode = ios_base::out);

#### mode

|member constant|stands for|access|
|---------------|----------|------|
|in| **in**put | open for reading |
|out| **out**put | open for writing |
|binary| **binary** | binary mode |
|ate| **at e**nd | output position starts at the end of the file |
|app| **app**end | appending to existing contents |
|trunc| **trunc**ate | any contents are discarded |

## [10]
`src/read_integers.c++`
