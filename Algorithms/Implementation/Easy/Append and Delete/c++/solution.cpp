#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>


using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int i = 0, s_len,t_len;
    s_len = s.length();
    t_len = t.length();    
    if(k >= (s_len+t_len)){
        return "Yes";
    }
    while(i < s_len && i < t_len){
        if(s[i] != t[i]){
            break;
        }
        i++;
    }
    k = k - (s_len+t_len) + (2 * i);
    if(k < 0){
        return "No";
    } else if (k % 2 == 0 ){
        return "Yes";
    }
    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
