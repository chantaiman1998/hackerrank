#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
/*
long strangeCounter(long t) {


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
*/

int main(){
    long long t,n = 2;
    cin >> t;
    while(3*(n-1) < t)n *= 2;
    cout << 3*(n-1)-t+1 << endl;
    return 0;
}
