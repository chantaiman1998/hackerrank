#include <bits/stdc++.h>

using namespace std;
/*
// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
*/
#define CONDITION_1 input[i][j] > input[i-1][j] && input[i][j] > input[i][j-1]
#define CONDITION_2 input[i][j] > input[i][j+1] && input[i][j] > input[i+1][j]

int main(){
    int n;
    char input[101][101];
    
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> input[i][j];
        }
    }
    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < n-1; j++){
            if(CONDITION_1 && CONDITION_2){
                input[i][j] = 'X';
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)cout << input[i][j];
        cout << endl;
    }
    return 0;
}
