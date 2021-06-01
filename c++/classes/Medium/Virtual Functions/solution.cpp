#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
  protected:
    int age;
    string name;
  public:
    vitrual void getdata(){};
    vitrual void putdata(){};
};

// sub class
class Professor: public Person
{
  int publication;
  static int id1;
    public:
      void getdata()
      {
        cin>>name;
        cin>>age;
        cin>>publication;
      }
      void putdata()
      {
        cout<<name<<" "<<age<<" "<<publication<<" "<<id1<<endl;
        id1++;
      }
};

//sub-class
int Professor::id1=1;
class Student : public Person
{
  int marks[6];
  static int id1;
  public:
    int sum = 0;
  void getdata()
  {
    cin>>name;
    cin>>age;
    for(int i=0; i<=5; i++)
    {
        cin>>marks[i];
        sum=sum+marks[i];
    }
  }
  // call method
  void putdata()
  {
    cout<<name<<" "<<age<<" "<<sum<<" "<<id2<<endl;
    id2++;
  }
};
int Student::id2=1;

int main(){
    int n, val;
    // number of objects that going to be created.
    cin>>n;
    Person *per[n];
  
    for(int i=0; i < n; i++){
        cin>>val;
        if(val == 1){
            //if val 1 current object is type Professor
            per[i] = new Professor;
        }
        // else current object is of type student
        else per[i] = new Student;
        
        // get data from user
        per[i]->getdata();
    }
    for(int i=0; i<=n; i++)
        // print the required output for each object.
        per[i]->putdata();
    return 0;
}
  
