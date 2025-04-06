class Solution {
    public:
        int maximumGain(string s, int x, int y) {
            stack<char> st;
            int ans=0;
            if(y>x){
                for(char ch:s){
                    if(!st.empty() && st.top()=='b' && ch=='a'){
                        st.pop();
                        ans+=y;
                    }
                    else{
                        st.push(ch);
                    }
                }
                stack<char> temp;
                while(!st.empty()){
                    temp.push(st.top());
                    st.pop();
                }
                while(!temp.empty()){
                    char ch=temp.top();
                    temp.pop();
                    if(!st.empty() && st.top()=='a' && ch=='b'){
                        st.pop();
                        ans+=x;
                    }
                    else{
                        st.push(ch);
                    }
                }
            }
            else{
                for(char ch:s){
                    if(!st.empty() && st.top()=='a' && ch=='b'){
                        st.pop();
                        ans+=x;
                    }
                    else{
                        st.push(ch);
                    }
                }
                stack<char> temp;
                while(!st.empty()){
                    temp.push(st.top());
                    st.pop();
                }
                while(!temp.empty()){
                    char ch=temp.top();
                    temp.pop();
                    if(!st.empty() && st.top()=='b' && ch=='a'){
                        st.pop();
                        ans+=y;
                    }
                    else{
                        st.push(ch);
                    }
                }
            }
            return ans;
        }
    };