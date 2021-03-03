#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Complete the stones function below.
/*
vector<int> stones(int n, int a, int b) {


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
*/

int main()
{
    int t, n, a, b;
    cin >> t;
    
    while(t--)
    {
        cin >> n >> a >> b;
        vector<int> arr;
        if(a==b) arr.push_back((n-1)*a);
        else{
            for(int i=1; i<=n; i++){
                arr.push_back(((n-i)*a)+((i-1)*b));
            }
        }
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
