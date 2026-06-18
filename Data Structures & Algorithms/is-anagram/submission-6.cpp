class Solution {
public:
     bool isAnagram(string s, string t) {
        // if not the same size, not anagrams
        if (s.size() != t.size()) return false;

        // Hashmaps where we will store chars and how many times that char
        // is in the string
        unordered_map<char, int> freq_s;
        unordered_map<char, int> freq_t;
        
        //increment frequency by one for each char
        for (const auto& c : s) freq_s[c]++;
        for (const auto& c : t) freq_t[c]++;

        // If chars and frequency are not the same between s and t
        // then they are not anagrams
        for(const auto& c : s){
            if (freq_s[c] != freq_t[c]) return false;
        }
        
        return true;
    }
};
