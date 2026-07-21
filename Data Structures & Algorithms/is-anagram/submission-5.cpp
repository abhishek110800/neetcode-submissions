class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for (auto i:s) {
            countS[i]++;
        }
        for(auto j:t)
        {
            countT[j]++;
        }
        return countS == countT;
    }
};
