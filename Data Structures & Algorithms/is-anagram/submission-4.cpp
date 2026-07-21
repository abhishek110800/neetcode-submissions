class Solution {
public:
    bool isAnagram(string s, string t) {
    

    unordered_map<char, int> countS;
    unordered_map<char, int> countT;

    for (char i : s) {
        countS[i]++;
    }

    for (char j : t) {
        countT[j]++;
    }

    if(countS == countT)
    return true;
    else 
    return false;
    }
};
