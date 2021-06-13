#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main(){
    int T;
    cin >> T;
    for(int a0=0; a0 < T; a0++){
        long int N;
        cin >> N;
        cout << ((N-1)*N)/2 << endl;
    }
    return 0;
}



