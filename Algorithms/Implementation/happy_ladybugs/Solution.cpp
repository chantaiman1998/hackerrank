#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, g;
    cin >> g;
    while(g--){
        int tab[27] = {};
        string s, output = "YES";
        bool tmp = true;
        cin >> n >> s;
        for(int i=0, j=0; i<n; i++, j+=2){
            if(tmp && j<n-1 && s[j]!=s[j+1] && s[j]!=s[j-1]) tmp = false;
            if(s[i]=='_') tab[26]++;
            else tab[s[i]-'A']++;
        }
        if(!tmp && tab[26]==0) output = "NO";
        cout << output << endl;
    }
    return 0;
}

