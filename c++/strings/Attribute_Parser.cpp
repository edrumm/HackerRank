#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>

using namespace std;


/*
    Tree-based solution
*/

struct TreeNode {
    string name;
    vector<TreeNode*> children;
};

int main() {
    int n, q;
    string s;
    vector<string> tags, queries;
    TreeNode * root = new struct TreeNode;
    
    cin >> n >> q;
    
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        tags.push_back(s);
    }
    
    for (int i = 0; i < q; i++) {
        getline(cin, s);
        queries.push_back(s);
    }

    /*
        TODO
    */
      
    return 0;
}
