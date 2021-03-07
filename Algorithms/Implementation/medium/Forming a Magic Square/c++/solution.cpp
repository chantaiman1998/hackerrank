#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
    // all combinations are stored in the array
    // set a,b,c,d,e,f,g,h be array
    int a[9] = {4,9,2,3,5,7,8,1,6};
    int b[9] = {2,7,6,9,5,1,4,3,8};
    int c[9] = {6,1,8,7,5,3,2,9,4};
    int d[9] = {2,9,4,7,5,3,6,1,8};
    int e[9] = {6,7,2,1,5,9,8,3,4};
    int f[9] = {8,1,6,3,5,7,4,9,2};
    int g[9] = {8,3,4,1,5,9,6,7,2};
    int h[9] = {4,3,8,9,5,1,2,7,6};
    int len = s.size();
    // to store the total cost of ach combination
    int ans[8] = {0};
    
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            int k = s[i][j];
            // for calculating total cost with each index of each information
            ans[0] += abs(k - a[((i*3)+j)]);
            ans[1] += abs(k - b[((i*3)+j)]);
            ans[2] += abs(k - c[((i*3)+j)]);
            ans[3] += abs(k - d[((i*3)+j)]);
            ans[4] += abs(k - e[((i*3)+j)]);
            ans[5] += abs(k - f[((i*3)+j)]);
            ans[6] += abs(k - h[((i*3)+j)]);
            ans[7] += abs(k - g[((i*3)+j)]);                 
        } 
    }
    int min = ans[0];
    // for finding minimum of all cost
    for(int i = 0; i<8; i++)
        if(ans[i]<min)
            min = ans[i];
    return min;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
