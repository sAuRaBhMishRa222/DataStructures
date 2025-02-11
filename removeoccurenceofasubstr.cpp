class Solution {
    public:
        string removeOccurrences(string s, string part) {
            int i = 0, j = 0;  // Declare two integer variables
    
            // Loop until 'part' is no longer found in 's'
            while ((i = s.find(part)) != string::npos) {
                s.erase(i, part.length());  // Remove 'part' from 's'
            }
    
            return s;  // Return the modified string
        }
    };
    