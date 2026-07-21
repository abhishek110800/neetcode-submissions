class Solution {
public:
    bool isPalindrome(string s) {
      string newStr = "";
        for (char c : s) {
            if (isalnum(c)) {
                newStr += tolower(c);
            }
        }
         if(newStr == string(newStr.rbegin(), newStr.rend()))
         {
         return true;
         }
         else
          return false;
    }
};
