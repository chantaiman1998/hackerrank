#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {
  uint32_t a, b;
  cin >> b >> a;
  cout << 2 * a / b + bool((2*a) % b);
  return 0;
}



