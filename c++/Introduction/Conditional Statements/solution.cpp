#include <bits/stdc++.h>

using namespace std;

int main()
{
    // array 
    string a[] = {
        "Greater than 9","one","two","three","four","five","six","seven","eight","nine"
    };

    int n;
    cin >> n;
    cout<<((n>9)?a[0]:a[n]);
    // Write Your Code Here

    return 0;
}

