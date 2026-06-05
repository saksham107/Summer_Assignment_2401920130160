class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string pre= s[0];
        for(int i=0; i<s.size(); i++){
            while(s[i].find(pre) !=0){
                pre.pop_back();
            }
        }
        return pre;
    }
};
