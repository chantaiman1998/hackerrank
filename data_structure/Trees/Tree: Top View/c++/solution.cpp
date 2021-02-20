#include<bits/stdc++.h>

using namespace std;
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }
                return root;
             }
         }
 using TopTable = map<int, pair<unsigned, int>>;
 void compute_table_entires(Node *nd, int xpos, unsigned depth, TopTable &tab) {
  if(nd) {
      auto it = tab.find(xpos);
      if(it != tab.cend() && depth < it->second.first){
          it->second = {depth, nd->data};
      } else {
          tab.insert({xpos, {depth, nd->data}}); }
          
      compute_table_entires(nd->left, xpos-1, depth+1, tab);
      compute_table_entires(nd->right, xpos-1, depth+1, tab);
  }          
}
  
  void topView(Node * root) {
      TopTable tab;
      compute_table_entires(root, 0, 0, tab);
      for(auto entry: tab){
          cout << entry.second.second << ' ';
      }
  }
};  // end of solution

int main() {
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;
    
    std:cin >> t;
    
    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    
    myTree.topView(root);
    return 0;
}

     
