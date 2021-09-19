#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream stream(str);
    vector<int> ints;
    
    for (int i = 0; stream >> i;) {
        if (stream.peek() == ',') {
            stream.ignore();
        }
        
        ints.push_back(i);
    }
    
    return ints;
}
