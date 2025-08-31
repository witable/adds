#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        result.reserve(s2.size());
        size_t index = 0;
        
        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found = s1.find(s2.c_str(), index, i);
            if (found != string::npos) {
                index = found;
                result.push_back(found);
            } else {
                result.push_back(-1);
                result.insert(result.end(), s2.size() - i, -1);
            }
        }
        return result;
    }

   
    