#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
  public:
  int width, height;
  void display()
  {
    cout << width << " " << height << "\n";
  }
}

class RectangleArea : public Rectangle
{
  public:
  void read_input()
  {
    cin >> width;
    cin >> height;
  }
  void display()
  {
    cout << width * height << "\n";
  }
};

int main()
{
  // declare a rectanglearea object
  Rectangle r_area;
  // read the width and height
  r_area.read_input();
  // print the width and height
  r_area.Rectangle::display();
  // print the area
  r_area.display();
  
  return 0;
}





