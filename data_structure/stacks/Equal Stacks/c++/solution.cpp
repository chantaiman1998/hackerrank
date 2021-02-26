//#include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

/*
 * Complete the 'equalStacks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h1
 *  2. INTEGER_ARRAY h2
 *  3. INTEGER_ARRAY h3
 */
/*
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n1 = stoi(first_multiple_input[0]);

    int n2 = stoi(first_multiple_input[1]);

    int n3 = stoi(first_multiple_input[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split(rtrim(h1_temp_temp));

    vector<int> h1(n1);

    for (int i = 0; i < n1; i++) {
        int h1_item = stoi(h1_temp[i]);

        h1[i] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split(rtrim(h2_temp_temp));

    vector<int> h2(n2);

    for (int i = 0; i < n2; i++) {
        int h2_item = stoi(h2_temp[i]);

        h2[i] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split(rtrim(h3_temp_temp));

    vector<int> h3(n3);

    for (int i = 0; i < n3; i++) {
        int h3_item = stoi(h3_temp[i]);

        h3[i] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
*/


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    // height of the 3 stacks
    int h1 = 0, h2 = 0, h3 = 0;
    vector<int> tower1(n1);
    for(int i = 0; i < n1; i++){
        cin>>tower1[i];
        h1 += tower1[i];
    }
    vector<int> tower2(n2);
    for(int i = 0; i < n2; i++){
        cin>>tower2[i];
        h2 += tower2[i];
    }
    vector<int> tower3(n3);
    for(int i = 0; i < n3; i++){
        cin>>tower3[i];
        h3 += tower3[i];
    }
    // use greedy approach, always remove cylinders from the tallest tower until all towers, have the same height.
    bool equalHeight = false;
    if(h1 == h2 && h2 == h3) {
        equalHeight = true;
    }
    // store the indices of which cylinder to remove
    int r1 = 0, r2 = 0, r3 = 0;
    while(!equalHeight){
        if(h1 >= h2 && h1 >= h3){
            h1 -= tower1[r1];
            r1++;
        }
        else if(h2 >= h1 && h2 >= h3){
            h2 -= tower2[r2];
            r2++;
        }
        else if(h3 >= h1 && h3 >= h2){
            h3 -= tower3[r3];
            r3++;
        }
        if((h1 == h2 && h2 == h3) || (h1 == 0 && h2 == 0 && h3 == 0)){
            equalHeight = true;
        }
    }
    cout << h1;
    return 0;
}
