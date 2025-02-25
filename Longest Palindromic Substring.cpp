class Solution {
    public:
        string expandAroundCenter(string& s, int left, int right) {
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
        }
    
        string longestPalindrome(string s) {
            int n = s.size();
            if (n == 0) return "";
            
            string longest = "";
            for (int i = 0; i < n; i++) {
                // Odd-length palindrome
                string odd = expandAroundCenter(s, i, i);
                if (odd.size() > longest.size()) longest = odd;
    
                // Even-length palindrome
                string even = expandAroundCenter(s, i, i + 1);
                if (even.size() > longest.size()) longest = even;
            }
            return longest;
        }
    };
    