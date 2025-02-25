class Solution {
    public:
        int longestValidParentheses(string s) {
            stack<int> index;
            index.push(-1);
            int res=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='(') index.push(i);
                else{
                    index.pop();
                    if(index.empty()) index.push(i);
                    else res=max(res,i-index.top());
                }
            }
            return res;
        }
    };