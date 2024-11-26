class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int ans = 0;
        unordered_set<char> unique;
        for (int right = 0; right < s.length(); right++) {
            while(unique.find(s[right]) != unique.end()){
                unique.erase(s[left]);
                left++;

            }
            unique.insert(s[right]);
            ans = max(ans, right - left + 1);
        }
        return ans;   
    }
};