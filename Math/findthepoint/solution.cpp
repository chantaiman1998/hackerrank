#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<string> split(const string &);

/*
  function is expected to return an INTEGER_ARRAY.
  The function accepts following parameters:
  1. int px, py, qx, qy
*/


int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));
  
  string n_temp;
  getline(cin, n_temp);
  
  int n = stoi(ltrim(rtrim(n_temp)));
  
  for (int n_itr = 0; n_itr < n; n_itr++) {
      string first_multiple_input_temp;
      getline(cin, first_multiple_input_temp);
    


