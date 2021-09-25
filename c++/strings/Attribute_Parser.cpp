#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>

using namespace std;

vector<string> tokenize(string s, char* d) {
    char * token = strtok(const_cast<char*>(s.c_str()), d);
    vector<string> tokens;

    while (token != nullptr) {
        tokens.push_back(string(token));
        token = strtok(nullptr, d);
    }

    return tokens;
}

int main() {
    int n, q;
    string s;
    vector<string> tags, queries;
    char* delim = " ";
    
    cin >> n >> q;
    
    // Trim & save
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        s.erase(remove(s.begin(), s.end(), '<'), s.end());
        s.erase(remove(s.begin(), s.end(), '>'), s.end());

        tags.push_back(s);
    }
    
    // Split & parse
    for (vector<string>::iterator it = tags.begin(); it < tags.end(); it++) {
        vector<string> tag = tokenize(it->c_str(), delim);
        vector<string>::iterator tag_it = tag.begin();
        
        while (tag_it != tag.end()) {
            
            if (strncmp(tag_it->c_str(), "=", 1) == 0) {
                tag_it++;
                continue;
            }
            
            /*
                TODO
            */
        }
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
