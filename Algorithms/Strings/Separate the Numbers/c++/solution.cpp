#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Complete the separateNumbers function below.
/*
void separateNumbers(string s) {


}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

    return 0;
}
*/

bool check(string str, int ind, long long int prev){
    if(ind == str.size()-1 && prev - (str[ind] - '0') == -1){
        return true;
    }
    else if(ind == str.size()) return true;
    long long int k=0;
    int i;
    for(i = ind; i < str.size(); i++){
        k = k*10 + (str[i]-'0');
        if(prev-k == -1){
            if(i+1 == str.size()){
                return true;
            }
            return check(str, i+1, k);
        }
        else if(k-prev > 1){
            return false;
        }
    }
    return false;
}
int main(){
    // enter code here.
    int n;
    cin >> n;
    while(n--){
        string str;
        int k;
        cin >> str;
        if(str[0] == '0'|| str.size() <=1){
            cout << "NO"<<endl;
            continue;
        }
        long long int j = 0;
        bool f = false;
        for(k = 0; k < str.size()-1; k++){
            j = j*10 + str[k]-'0';
            f = check(str, k+1, j);
            if(f == true){
                cout << "YES" << " " << j << endl;
                break;
            }
        }
        if(f== false)  cout<<"NO"<<endl;
    }
    return 0;
}

