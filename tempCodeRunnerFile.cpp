#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string getSmallestString(string s, int k) {
        vector<char> t(s.begin(), s.end());
        
        auto dista = [](char c) {
            return min(c - 'a', 26 - (c - 'a'));
        };
        
        for (int i = 0; i < t.size(); i++) {
            int current_dist = dista(t[i]);
            if (k >= current_dist) {
                k -= current_dist;
                t[i] = 'a';
            } else {
                if (k > 0) {
                    if (t[i] - k > 'a') {
                        t[i] -= k;
                    } else {
                        t[i] = 'z' - (k - 1);
                    }
                    k = 0;
                    break;
                }
            }
        }
        
        if (k > 0) {
            t.insert(t.end(), k, 'a');
        }
        
        return string(t.begin(), t.end());
    }
};

