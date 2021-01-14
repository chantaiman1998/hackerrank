#include <bits/stdc++.h>

using namespace std;
/*
vector<string> split_string(string);

// Complete the maxXor function below.
vector<int> maxXor(vector<int> arr, vector<int> queries) {
    // solve here

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(m);

    for (int i = 0; i < m; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<int> result = maxXor(arr, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
*/
struct trie{
    trie *child[2];
    bool is_end;
};
trie *new_node()
{
    trie *temp = new trie;
    temp->child[0] = NULL;
    temp->child[1] = NULL;
    temp->is_end = false;
return temp;
}
void insert(trie *root, int x)
{
    trie *temp = root;
    int index;
    for(int i=31; i>=0; i--)
    {
        if(x&(1<<i))
          index=1;
        else 
          index=0;
        if(temp->child[index]==NULL)
         temp->child[index]=new_node();
        
        temp=temp->child[index];
    }
    temp->is_end=true;
}
void search_result(trie *root, int x)
{
    int cnt=0, index, index_;
    trie *temp = root;
    for(int i=31; i>=0; i--)
    {
        if(x&(1<<i))
          index=1;
        else 
          index=0;
          
        index_=(index+1)%2;
        
        if(temp->child[index_]!=NULL && temp->is_end==false)
        {
            cnt=cnt+pow(2,i);
            temp=temp->child[index_];
        }
        else {
        temp = temp->child[index];
        }
    }
    cout<<cnt<<endl;
}

void max_xor(int vec[], int n, int q[], int t)
{
    trie *root=new_node();
    for(int i=0; i<n; i++)
    {
     insert(root, vec[i]);
    }
    for(int i=0; i<t; i++)
    {
     search_result(root, q[i]);
    }
}

int main()
{
    int n, x, t;
    cin>>n;
    int vec[n];
    for(int i=0; i<n; i++)
     cin >>vec[i];
     
     cin>>t;
     int q[t];
     for(int i=0; i<t; i++)
      cin>>q[i];
      
max_xor(vec, n, q, t);
return 0;
}
        
    

