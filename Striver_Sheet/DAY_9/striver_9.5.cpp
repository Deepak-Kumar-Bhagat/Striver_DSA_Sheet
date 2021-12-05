class Solution {
public:
    vector<vector<string>> res;
    bool ispalindrome(string str){
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
            }
         return true;
     }
    void helper(string s,int idx,vector<string> &temp){
        if(idx==s.size()){
            res.push_back(temp);
        }
        for(int i=idx;i<s.size();i++){
            string str=s.substr(idx,(i-idx)+1);
            if(ispalindrome(str)){
                temp.push_back(str);
                helper(s,i+1,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        helper(s,0,temp);
        return res;
    }
};