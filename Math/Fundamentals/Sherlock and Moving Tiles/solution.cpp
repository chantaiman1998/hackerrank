#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

typedef long long ll;
int main() {
  ll l, s1, s2, q, qi; 
  cin>> l>> s1 >> s2 >> q;
  if(s1>>s2) swap(s1, s2);
  while(q--){
      cin >> qi;
      cout << setprecision(10) << fixed;
      cout << (l*sqrt(2)-sqrt(2*qi))/(s2-s1)<<endl;
  }
  return 0;
}
