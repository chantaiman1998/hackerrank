#include <bits/stdc++.h>

using namespace std;

//typedef
typedef long long int ll;
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c)

// Complete the organizingContainers function below.
/*
string organizingContainers(vector<vector<int>> container) {


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
*/
int main(){
    ll t, n, m, i=0, j=0, k=0, ck=0, dk=0, a, b, c;
    sc1(t);     
    while(t--){
        sc1(n);
        ll arr[n][n];
        ll row[n],col[n];
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cin>>arr[i][j];
                row[i] += arr[i][j];
                col[j] += arr[i][j];
            }
        }
        
        sort(row, row+n);
        sort(col, col+n);
        ll x = 0;
        for(i=0; i<n; i++){
            if(row[i]!=col[i]){
                x = 1;
                break;
            }
        }   
        
        if(x==0)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
}


