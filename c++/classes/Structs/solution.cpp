
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/

struct Student {
  int age, stanrard;
  string first_name, last_name;
}

int main(){
  Student st;
  cin >> st.age >> st.first_name >> st.last_name >> st.stanrard;
  cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

  return 0;
}

