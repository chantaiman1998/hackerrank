#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
  public: 
      int data;
      SinglyLinkedListNode *next;
      SinglyLinkedListNode(int node_data) {
          this->data = node_data;
          this->next = nullptr;
      }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;
        SinglyLinkedListNode() {
          this->head = nullptr;
          this->tail = nullptr;
        }
        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
            if (!this->head) {
                this->head = node;
            } else {
            
            
        
      
      
      
