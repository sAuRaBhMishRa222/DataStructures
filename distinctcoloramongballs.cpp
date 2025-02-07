class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballColor; // Maps ball index to its color
        unordered_set<int> distinctColors; // Stores distinct colors
        vector<int> result;
        
        for (auto& query : queries) {
            int ball = query[0], color = query[1];
            
            // If the ball already has a color, remove the old color if needed
            if (ballColor.count(ball)) {
                int oldColor = ballColor[ball];
                ballColor[ball] = color;
                
                // Check if the old color is still in use
                bool stillExists = false;
                for (auto& entry : ballColor) {
                    if (entry.second == oldColor) {
                        stillExists = true;
                        break;
                    }
                }
                
                if (!stillExists) {
                    distinctColors.erase(oldColor);
                }
            } else {
                ballColor[ball] = color;
            }
            
            // Insert the new color into the set
            distinctColors.insert(color);
            
            // Store the count of distinct colors
            result.push_back(distinctColors.size());
        }
        
        return result;
    }
};