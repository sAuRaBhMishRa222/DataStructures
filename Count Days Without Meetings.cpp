//Brute Force case passed 762/778
// class Solution {
// public:
//     int countDays(int days, vector<vector<int>>& meetings) {
//         unordered_set<int> set;
//         for(int i=0;i<meetings.size();i++){
//             for(int j=meetings[i][0];j<=meetings[i][1];j++){
//                 set.insert(j);
//             }
//         }
//         int ans=0;
//         for(int i=1;i<=days;i++){
//             if(set.count(i)==0) ans++;
//         }
//         return ans;
//     }
// };


class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(), meetings.end()); // Sort by start day
            int free_days = 0, last_meeting_end = 0;
            
            for(auto &meeting : meetings) {
                int start = meeting[0], end = meeting[1];
    
                // Count free days before the current meeting
                if (start > last_meeting_end + 1) {
                    free_days += start - last_meeting_end - 1;
                }
                
                // Update the last meeting end
                last_meeting_end = max(last_meeting_end, end);
            }
    
            // Count free days after the last meeting
            free_days += max(0, days - last_meeting_end);
    
            return free_days;
        }
    };
    