class Solution {
public:
    string reverseWords(string s) {
        string  word;
        string ans = "";
        stringstream m(s);
        while(m>>word)
            ans = word + " " + ans;
        ans.pop_back();
        return ans;
    }
};