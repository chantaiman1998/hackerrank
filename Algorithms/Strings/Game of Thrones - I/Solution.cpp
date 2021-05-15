
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.


string gameOfThrones(string s) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
 */
int main(){
  string s;
  cin >> s;
  int arr[26] = {0};
  int i = 0, count = 0;
  while(s[i]!='\0')
  {
    arr[s[i]-97]++;
    i++;
  }
  i = 0;
  while(i < 26)
  {
    if(arr[i]%2 != 0)
    {
      if(count < 1)
         count++;
      else {
          cout << "NO";
          return 0;
      }
    }
    i++;
  }
  cout << "YES";
  return 0;
}

    
