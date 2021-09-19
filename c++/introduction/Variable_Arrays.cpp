#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, size, j, k;
    cin >> n >> q;
    
    vector<vector<int>> vec;
    
    for (int i = 0; i < n; i++) {
        cin >> size;
        vector<int> x;
        
        for (int j = 0; j < size; j++) {
            int num;
            cin >> num;
            x.push_back(num);
        }
        
        vec.push_back(x);
    }
    
    for (int i = 0; i < q; i++) {
        cin >> j >> k;
        cout << vec[j][k] << endl;
    }
       
    return 0;
}