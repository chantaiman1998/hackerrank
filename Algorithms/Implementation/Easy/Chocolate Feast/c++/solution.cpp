#include <bits/stdc++.h>

using namespace std;

/*
vector<string> split_string(string);

// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string ncm_temp;
        getline(cin, ncm_temp);

        vector<string> ncm = split_string(ncm_temp);

        int n = stoi(ncm[0]);

        int c = stoi(ncm[1]);

        int m = stoi(ncm[2]);

        int result = chocolateFeast(n, c, m);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
*/

int main(){
    int t, n, c, m, ans = 0;
    cin >> t;
    
    while(t--){
        cin >> n >> c >> m;
        int tmp = ans = n/c;
        
        while (tmp >= m){
                ans++;
                tmp-=m;
                tmp++;
            }
            cout << ans << endl;
        }
        return 0;
}
