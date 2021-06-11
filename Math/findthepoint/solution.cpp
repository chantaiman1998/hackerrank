#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<string> split(const string &);

/*
  function is expected to return an INTEGER_ARRAY.
  The function accepts following parameters:
  1. int px, py, qx, qy
*/
// solution start
vector<int> findPoint(int px, int py, int qx, int qy) {
    vector<int> points(2);
    int x, y;
    /*
      using rotation matrix {cos(180)=-1 and sin(180)=0}
      and multiplying it by column vector(x, y)^T
      [-1 0]
      [0 -1]
    */
  
    // Moving the qx and qy point to origin, so px and py also move to new position
    x = px - qx;
    y = py - qy;

    // applying the rotation matrix to new px and py points  
    x = (-1*x) + (0*y);
    y = (0*x) + (-1*y);  
  
    // returning the modified points px and py to their original positions
    x = x+qx;
    y = y+qy;
  
    points[0] = x;
    points[1] = y;

    return points;
  
// solution end
int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));
  
  string n_temp;
  getline(cin, n_temp);
  
  int n = stoi(ltrim(rtrim(n_temp)));
  
  for (int n_itr = 0; n_itr < n; n_itr++) {
      string first_multiple_input_temp;
      getline(cin, first_multiple_input_temp);
    
      int n = stoi(ltrim(rtrim(n_temp)));
    
      for (int n_itr = 0; n_itr < n; n_itr++) {
          string first_multiple_input_temp;
          getline(cin, first_multiple_input_temp);
          
          vector<string> first_multiple_inpout = split(rtrim(first_multiple_input_temp));
          int px = stoi(first_multiple_input[0]);
          int py = stoi(first_multiple_input[1]);
          int qx = stoi(first_multiple_input[2]);
          int qy = stoi(first_multiple_input[3]);
          
          vector<int> result = findpoint(px, py, qx, qy);
          
          for (size_t i = 0; i < result.size(); i++) {
              fout << result[i];
              if(i != result.size() - 1) {
                fout << " ";
              }
          }
          fout << "\n";
      }
      fout.close();
      return 0;
  }
  
  string ltrim(const string &str) {
      string s(str);
      s.erase(
          s.begin(),
          find_if(s.begin(), s.end(), notl(ptr_fun<int, int>(isspace)))
      );
      return s;
  }
  
  string rtrim(const string &str) {
      string s(str);
      s.erase(
          find_if(s.rbegin(), s.rend(), notl(ptr_fun<int, int>(isspace))).base(),
          s.end()
      );
      return s;
  }
  
  vector<string> split(const string &str) {
      vector<string> tokens;
      
      string::size_type start = 0;
      string::size_type end = 0;
    
      while ((end = str.find(" ", start)) != string::npos) {
          tokens.push_back(str.substr(start, end - start));
          start = end + 1;
      }
    
      tokens.push_back(str.substr(start));
      return tokens;
  }
  
  
