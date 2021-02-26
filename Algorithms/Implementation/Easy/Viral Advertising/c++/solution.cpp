#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
// complete solution
int viralAdvertising(int n) {
    int recipients = 5, likes = 2;
    if(n > 1){
        for(int i = 2; i <= n; i++)
        {
            recipients = int(recipients / 2) * 3;
            likes += int(recipients / 2);
        }
    }
    return likes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
