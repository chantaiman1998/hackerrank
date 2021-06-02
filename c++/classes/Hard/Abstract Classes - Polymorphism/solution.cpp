#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
  Node* next;
  Node* prev;
  int value;
  int key;
  Node(Node* p, Node* n, int k, int val):prev(p), next(n),key(k), value(val){};
  Node(int k, int val):prev,next(NULL),key(k),value(val){};
};

class Cache{
  protected:
  map<int, Node*> mp; // map the key to node in linked list
  
}

    https://codeworld19.blogspot.com/2020/06/abstract-classes-polymorphism-in-c.html
    
