#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

// complete the rpograms function below.
string pangrams(string s) {
    int arr[26] = {0};      // set everything to 0.
    for(char& c: s){
        if (c >= 97 && c <= 122) arr[c-97] = 1; // a
        else if (c >= 65 && c <= 90) arr[c-65] = 1; // A
    }
    for (int i = 0; i < 26; i++)
        if (arr[i] == 0) return "not pangram";
    return "pangram";
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));
  string s;
  getline(cin, s);
  string result = pangrams(s);
  fout << result << "\n";
  fout.close();
  return 0;
}

