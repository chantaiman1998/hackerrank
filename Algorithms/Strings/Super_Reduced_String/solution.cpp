#include <bits/stdc++.h>

using namespace std;

/*
  complete the 'superReducedString' function below.
  The function is expected to return a STRING.
  The function accepts STRING s as parameter
*/
// complete function here
string superReducedString(string s) {
    if (s.empty()) return "Empty String";
    if (s.size() >= 2) {
        for (int i = 1; i < s.size(); i++)
            if (s[i] == s[i-1])
                return superReducedString(s.erase(i - 1, 2));
    }
    return s;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));
  string s;
  getline(cin, s);
  string result = superReducedString(s);
  fout << result << "\n";
  fout.close();
  return 0;
}

      


