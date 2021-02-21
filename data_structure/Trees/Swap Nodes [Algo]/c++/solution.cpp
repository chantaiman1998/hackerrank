#include <bits/stdc++.h>
#include <queue>
#include <iostream>

using namespace std;

/*
 * Complete the swapNodes function below.
 */
// vector<vector<int>> swapNodes(vector<vector<int>> indexes, vector<int> queries) {
    /*
     * Write your code here.
     */

// }
/*
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> indexes(n);
    for (int indexes_row_itr = 0; indexes_row_itr < n; indexes_row_itr++) {
        indexes[indexes_row_itr].resize(2);

        for (int indexes_column_itr = 0; indexes_column_itr < 2; indexes_column_itr++) {
            cin >> indexes[indexes_row_itr][indexes_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int queries_itr = 0; queries_itr < queries_count; queries_itr++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[queries_itr] = queries_item;
    }

    vector<vector<int>> result = swapNodes(indexes, queries);

    for (int result_row_itr = 0; result_row_itr < result.size(); result_row_itr++) {
        for (int result_column_itr = 0; result_column_itr < result[result_row_itr].size(); result_column_itr++) {
            fout << result[result_row_itr][result_column_itr];

            if (result_column_itr != result[result_row_itr].size() - 1) {
                fout << " ";
            }
        }

        if (result_row_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
*/

struct node 
{
    int data;
    struct node *left;
    struct node *right;
    node(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

void InOrder(struct node *root)
{
    if(! root)
        return;
    InOrder(root->left);
    cout<<root->data<<' ';
    InOrder(root->right);
}

void swapSubtreesOfLevel(node *root, int k)
{
    if(! root)
        return;
    
    queue<node *>Q;
    Q.push(root);
    Q.push(NULL);
    int level = 1;
    
    while(! Q.empty())
    {
        node *tmp = Q.front();
        Q.pop();
        
        if(tmp == NULL)
        {
            if(! Q.empty())
            {
                Q.push(NULL);
            }
            level++;
        }
        else {
            if(level == k)
            {
                node *sw = tmp->left;
                tmp->left = tmp->right;
                tmp->right = sw;
            }
            if(tmp->left)
                Q.push(tmp->left);
            if(tmp->right)
                Q.push(tmp->right);
        }
    }
}

int main() {
    int N;
    cin>>N;
    
    node *root = NULL;
    queue<node *> Q;
    int level = 1;
    
    if(N > 0)
    {
        root = new node(1);
        Q.push(root);
        Q.push(NULL);
    }
    
    while((N > 0) && (! Q.empty()))
    {
        node *tmp = Q.front();
        Q.pop();
        if(tmp == NULL)
        {
            if(!Q.empty())
                Q.push(NULL);
            level++;
        }
        else {
        int a, b;
        cin>>a>>b;
        
        if(a != -1)
        {
            tmp->left = new node(a);
            Q.push(tmp->left);
        }
        
        if(b != -1)
        {
            tmp->right = new node(b);
            Q.push(tmp->right);
        }
        N--;
        }
    }
    
    int T;
    cin>>T;
    
    while(T > 0)
    {
        int k;
        cin>>k;
        int itr = 2;
        int lvl = k;
        while(lvl <= level)
        {
            swapSubtreesOfLevel(root, lvl);
            lvl = itr * k;
            itr++;
        }
        InOrder(root);
        cout<<endl;
        T--;
    }
    return 0;
}
