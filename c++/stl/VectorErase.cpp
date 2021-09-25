#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;


int main() {
    int n, x;
    vector<int> numbers;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        numbers.push_back(x);
    }
      
    int pos1, pos2, pos3;

    cin >> pos1;
    cin >> pos2;
    cin >> pos3;
    
    numbers.erase(numbers.begin() + (pos1 - 1));
    numbers.erase(numbers.begin() + (pos2 - 1), numbers.begin() + (pos3 - 1));
      
    cout << numbers.size() << endl;
    
    for (int i : numbers) {
        cout << i << " ";
    }
    
    return 0;
}
