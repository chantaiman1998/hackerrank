
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2

int makingAnagrams(string s1, string s2) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
 */

int main(){
    string s1, s2;
    cin >> s1 >> s2;
  
    sort(s1.begin(), s1.end());
    sort(s1.begin(), s1.end());
  
    int i = 0;
    int j = 0;
    int ans = 0;
  
    while(i < s1.size() || j < s2.size()){
        if (i >= s1.size()){
            j++;
            ans++;
        } else if (j >= s2.size()){
            i++;
            ans++;
        } else if (s1[i] == s2[j]){
            i++;
            j++;
        } else if (s1[i] < s2[j]){
            ans++;
            i++;   
        } else if (s1[i] < s2[j]){
            ans++;
            j++;
        }
    }
  cout << ans;
  return 0;
}
