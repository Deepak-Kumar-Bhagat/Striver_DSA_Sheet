class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        int count=1;
        unordered_map<int,int> m;
        m[s[0]]++;
        int i=0;
        int j=1;
        while(j<s.length()){
            m[s[j]]++;
            while(m[s[j]]>1){
                m[s[i]]--;
                i++;
            }
               count=max(count,j-i+1);
                j++;
        }
        return count;
    }
};