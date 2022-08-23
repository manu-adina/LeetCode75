/* Pretty easy */

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() > t.size()) return false;
        
        std::size_t s_pos = 0;
        for(std::size_t i = 0; i < t.size(); i++) {
            if(s[s_pos] == t[i]) s_pos++;
        }
        
        if(s_pos == s.size()) return true;
        return false;
    }
};
