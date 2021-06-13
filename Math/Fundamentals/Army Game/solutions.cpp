#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
  int n;
  int m;
  cin >> n >> m;
  if(n <= 2 && m <= 2)
        cout<<"1";
  else
  {
        cout<<((n%2)+(n/2)) * ((m/2) + (m%2))<<endl;
  }
  return 0;
}

