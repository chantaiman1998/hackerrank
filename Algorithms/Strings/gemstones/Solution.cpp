#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gemstones' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY arr as parameter.

int gemstones(vector<string> arr) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

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
 */

int main()
{
  int n, i , ans = 0, ar[109][26] = {}, j, flag;
  string s;
  cin >> n;
  
  for(i = 0; i < n; i++){
      cin >> s;
      for(j = 0; j < s.size(); j++)
          ar[i][s[j] - 'a']++;
            //s[j]-'a' gets the index that is within 26
            //and the loop traverses through the string and count frequency of chars
  }
  
      //check each character and find out whether or not they are present in all of the n strings
      for(i = 0; i< 26; i++){
          flag = 0;
          // checking each n strings
          for(j = 0; j<n; j++)
          {
            // if it occurs at least once
            if(ar[j][i]==0)
                flag=1;
          }
          if(flag==0)
              ans++;
      }
      cout << ans << andl;
      return 0;
}

  
    
  
  
