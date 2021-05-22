#include<bits/stdc++.h>

using namespace std;

class Box
{
  private:
  // l, b, h are int representing the dimensions of the box.
  int length, breadth, height;
  public:
  // Constructors;
  // box();
  Box()
  {
    length = 0;
    breadth = 0;
    height = 0;
  }
  // box(int, int, int);
  Box(int l, int b, int h)
  {
    length = l;
    breadth = b;
    height = h;
  }
  //
