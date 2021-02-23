/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
    vector <int> v;
	bool checkBST(Node* root) {
        if(root == NULL)
        return true;
        bool flag = checkBST(root->left);
        if(!flag)
            return false;
        v.push_back(root->data);
        flag = checkBST(root->right);
        if(!flag)
            return false;
        // to check if array is not in ascending order
        for(int i=0; i<v.size()-1; i++){
            if(v[i]>=v[i+1])
                return false;
        }
        return true;
	}
  
  
