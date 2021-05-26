#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Traingle {
  public:
    void triangle(){
      cout <<"I am triangle\n";
    }
};

class Isosceles : public Triangle {
    public:
        void isosceles(){
           cout<<"I am an isosceles triangle\n";
        }
  
        void description(){
           cout<<"In an isosceles triangle two sides are equal" << endl;
        }
};

int main(){
  Isosceles isc;
  isc.isosceles();
  isc.desciption();
  isc.triangle();
  return 0;
}
  


