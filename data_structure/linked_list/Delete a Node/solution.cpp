#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
  public:
      int data;
      SinglyLinkedListNode *next;
      SinglyLinkedListNode(int node_data) {
          this->data = nullptr;
          this->data = nullptr;
      }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;
        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }
        void insert_node(int node_data)
        {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }
            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;
        node = node->next;
        if (node) {
            fout << sep;
        }
   }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        free(temp);
    }
}

// complete the deleteNode function below.
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    // if we need to delete the head
    if (positition == 0) {
        SinglyLinkedListNode* next = head->next;
        delete head;
        return next;
    }
    
    // for any other node to delete
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* prev;
    int pos = 0;
    while(temp != nullptr) {
        if (pos == position) break;
        prev = temp;
        temp = temp->next;
        pos++;
    }
    prev->next = temp->next;
    delete temp;
    return head;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    SinglyLinkedList* llist = new SinglyLinkedList();
    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        llist->insert_node(llist_item);
    }
    int position;
    cin >> position;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    SinglyLinkedListNOde* llist1 = deleteNode(llist->head, position);
    print_singly_linked_list(llist1, " ", fout);
    fout << "\n";
    free_singly_linked_list(llist1);
    fout.close();
    return 0;
}


  
  
      




