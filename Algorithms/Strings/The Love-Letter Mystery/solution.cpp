
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'theLoveLetterMystery' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.


int theLoveLetterMystery(string s) {

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

        int result = theLoveLetterMystery(s);

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
string str;
int main(){
    int T;
    cin >> T;
    for(int t=0; t< T; t++){
        cin >> str;
        long long cnt = 0;
         /// if string size is odd you don't need to calculate middle value
        /// abc or cba calculate a and c u will find than minimum answer
        for(int i = 0, j = str.size()-1; i < str.size()/2; i++, j--) 
          cnt+= abs(str[i]-str[j]);
            cout << int << endl;
    }
    return 0;
}





