#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
/*
// Complete the findDigits function below.
int findDigits(int n) {


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
*/
int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N; cin >> N;
        int tmp = N, cnt = 0;
        while(tmp!=0){
            int r = tmp%10;
            if(r != 0 && N%r == 0)cnt++;
            tmp /= 10;
        }
        cout << cnt << endl;
    }
    return 0;
}

