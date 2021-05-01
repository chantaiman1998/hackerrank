/*
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


 * Complete the 'alternate' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.

int alternate(string s) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

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

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n; std::cin >> n; /* useless to us, but whatever... */
    std::string s; std::cin >> s;

    std::vector<int> freq(26,0);
    for (const char& c : s) freq[c-'a']++;

    int max = 0;
    char last;
    bool valid;

    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] == 0) continue;

        for (int j = i+1; j < freq.size(); j++) {

            if (freq[j] == 0) continue;

            last = -1;
            valid = true;
            for (const char& c : s) {
                if (c == char(i+'a') || c == char(j+'a')) {
                    if (last == c) {
                        valid = false;
                        break;
                    }
                    last = c;
                }
            }

            if (valid && std::abs(freq[i] - freq[j]) <= 1)
                max = std::max(max, freq[i] + freq[j]);
        }
    }
    std::cout << max << std::endl;

    return 0;
}
