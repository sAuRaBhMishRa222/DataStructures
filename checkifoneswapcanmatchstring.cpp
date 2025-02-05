class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        int i=0;
        vector<int> temp;
        while(i<s1.length()){
            if(s1[i]==s2[i]){
                i++;
            }
            else{
                temp.push_back(i);
                i++;
            }
            
        }
        if(temp.size()!=2) return false;
        swap(s1[temp[0]],s1[temp[1]]);
        return s1==s2;
    }
};