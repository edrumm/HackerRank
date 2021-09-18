#include <vector>

using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    
    for (int n : ar) {
        sum += n;    
    }
    
    return sum;
}