#include <bits/stdc++.h>

using namespace std;
/*
string ltrim(const string &);
string rtrim(const string &);


 * Complete the 'stringConstruction' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.

int stringConstruction(string s) {

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

        int result = stringConstruction(s);

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
 */
int main(){
  int N;
  string str;
  cin >> N;
  
  for(int n = 0; n < N; n++){
    cin >> str;
    int len = str.length(), cnt = 0, ar[26] = {0};
    for(int i = 0; i < len; i++)ar[str[i]-'a']=1;


