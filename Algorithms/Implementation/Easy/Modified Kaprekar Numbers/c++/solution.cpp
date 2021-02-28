#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
/*
void kaprekarNumbers(int p, int q) {


}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
*/
int main(){
    // enter code here. Read input from STDIN.Print output to STDOUT.
    int p, q;
    bool t=false;
    cin >> p >> q;
    for(int i=p; i<=q; i++){
        string s = to_string((long)i*(long)i);
        long sub = s.size()/2;
        int x = atoi(s.substr(0,sub).c_str()) + atoi(s.substr(sub,s.size()).c_str());
        if(!t && x==i) t=true;
        if(x==i) cout << i << " "; 
    }
    if(!t) cout << "INVALID RANGE" << endl;
    return 0;
}

