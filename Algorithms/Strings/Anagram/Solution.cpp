#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/*
string ltrim(const string &);
string rtrim(const string &);


 * Complete the 'anagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.

int anagram(string s) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

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

int main(){
    string str1, str2;
    int len1, len2, cnt = 0, sz, alpha1[26] = {0}, alpha2[26] = {0};
    cin >> str1;
    cin >> str2;
    len1 = str1.size();
    len2 = str2.size();
    for(int i = 0; i < len1; i++)alpha1[str1[i]-97]++;
    for(int i = 0; i < len2; i++)alpha2[str2[i]-97]++;
    for(int i = 0; i < 26; i++)cnt += abs(alpha1[i]-alpha2[i]);
    cout << cnt << endl;
    return 0;
}
 */

int main(){
  int n, i, count;
  cin >> n;
  string arr, str, str1;
  int a[26]={0}, b[26]={0};
  while(n--){
    count = 0;
    cin >> arr;
    if(arr.length()%2!=0)
    {
      cout <<-1<<endl;
      continue;
    }
    str = arr.substr(0, arr.length()/2);
    str1 = arr.substr(arr.length()/2, arr.length()-1);
    i = 0;
    while(str[i]!='\0')
    {
      a[str[i]-97]++;
      i++;
    }
    i=0;
    while(str1[i]!='\0')
    {
      b[str1[i]-97]++;
      i++;
    }
    i=0;
    while(i<26){
      count+= abs(a[i]-b[i]);
      i++;
    }
    cout << count/2 << endl;
    memset(a, 0, sizeof(int)*26);
    memset(a, 0, sizeof(int)*26);
  }
  return 0;
}
    
      
