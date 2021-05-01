#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

// minimumNumber function below.
int minimumNumber(int n, string password){
  // return the minimum number of characters to make the 
  int lower = 1, upper =1, digit = 1, special = 1;
  int size = password.size();
  string s("!@#%^&*()-+");
  for(char& c : password){
      // note: user may consider regex instead
      if(c >= 'A' && c<= 'Z') upper = 0;
      else if(c >= 'a' && c <= 'z') lower = 0;
      else if(c >= '0' && c <= '9') digit = 0;
      else if(s.find(c) != string::npos) special = 0;
  }
  int total = lower + upper + digit + special;
  return max(6-size, total);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}



