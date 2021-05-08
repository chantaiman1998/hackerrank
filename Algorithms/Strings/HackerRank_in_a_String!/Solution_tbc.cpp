#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'hackerrankInString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
// word to find
const string WORD = "hackerrank";

// complete the hackerrankInString function below.
string hackerrankInString(string s) {
    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
        if (pos == WORD.size() - 1) break;
        if (s[i] == WORD[pos]) pos++;
    }
    return (pos == WORD.size() - 1) ? "YES" : "NO";
}

int main()
{
    ofstream fout(gentenv("OUTPUT_PATH"));
    
    string q_temp;
    getline(cin, q_temp);
    
    int q = stoi(ltrim(rtrim(q_temp)));
    
    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);
        string result = hackerrankInString(s);
        fout << result << "\n";
    }
    
    fout.close();
    return 0;
}

