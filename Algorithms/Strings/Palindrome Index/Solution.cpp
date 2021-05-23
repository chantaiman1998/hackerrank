#include <bits/stdc++.h>

using namespace std;

/*
string ltrim(const string &);
string rtrim(const string &);


 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.


int palindromeIndex(string s) {
    int i = 0, j = s.size() - 1;
    int stored_i = i, stored_j = j;
    bool error = false;
    if (s.size() >= 3){
        while(i <= j){
            if(s[i] != s[j]){
                if(error) return stored_j;
                error = true;
                stored_i = i;
                stored_j = j;
                i++;
            }
            else
                i++; j--;
        }
    }
    return error ? stored_i : -1;
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

        int result = palindromeIndex(s);

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


int palindromeIndex(string s){
    int i = 0, j = s.size() - 1;
    int stored_i = i, stored_j = j;
    bool error = false;
    if(s.size() >= 3){
        while(i <= j){
            if(s[i] != s[j]){
                if(error) return stored_j;
                error = true;
                stored_i = i;
                stored_j = j;
                i++;
            }
            else
                i++, j--;
        }
    }
    return error?stored_i : -1;
}
*/

typedef long long ll;
bool ispal(string s, ll pos){
    ll l=s.size()-1,i=0;
    while(i<=l){
        if(i==pos) i++;
        if(l==pos) l--;
        if(s[i++]!=s[l--]) return false;
    }
    return true;
}

int main(){
    ll t;
    cin>> t;
    while(t--){
        string s;
        cin >> s;
        if(ispal(s,-10)){
            cout<<-1<<endl;
            continue;
        }
        ll l=s.size()-1, i=0, left, right;
        while(i<=l){
            if(s[i++]!=s[l--]){
                left=i-1; right=l+1;
                break;
            }
        }
        if(ispal(s, left)){
            cout << left << endl;
            continue;
        }
        if(ispal(s, right)){
            cout << right << endl;
            continue;
        }
    }
    return 0;
}

