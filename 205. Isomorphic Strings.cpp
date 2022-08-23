/* Basically, I had the trouble of understanding this problem, even though it's marked as EASY.
 * The idea behind this is to have a pseudo hash_map, and track the position of repeating characters.
 * If the repeating characters from both of the strings, aren't in the same 'position', then the 
 * strings aren't 'isomorphic'.


class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        if(s.size() != t.size()) return false;
        
        int m1[256] = {0}, m2[256] = {0}, n = s.size();
        
        for(std::size_t i = 0; i < n; ++i) {
            if(m1[s[i]] != m2[t[i]]) return false;
            
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        
        return true;
    }
};
