#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// method start
class Matrix
{
  public:
      vector<vector<int>> a;
      Matrix() {}
      Matrix operator+(const Matrix &o)
      {
        Matrix sum(*this);
        for(size_t i=0; i < sum.a.size(); i++)
        {
          for(size_t j=0; j < sum.a.size(); j++)
          {
            sum.a[i][j] += o.a[i][j];
          }
        }
        return sum;
      }
};
// method end

int main()
{
  int cases, k;
  cin >> cases;
  for(k = 0; k<cases


