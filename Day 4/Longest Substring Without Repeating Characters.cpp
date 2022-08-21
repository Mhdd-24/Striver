class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=0;
        int start =0;
        int end=0;
        int n=s.size();
        set<char> st;
        while(start<n){
            auto it = st.find(s[start]);
            if(it==st.end()){
                if(start-end+1>max){
                    max=start-end+1;
                }
                st.insert(s[start]);
                start++;
            }
            else
            {
                st.erase(s[end]);
                end++;
            }
        }
        return max;
    }
};