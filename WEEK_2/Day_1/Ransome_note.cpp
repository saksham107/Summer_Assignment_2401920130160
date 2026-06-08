class Solution {
public:
    bool canConstruct(string r, string m) {
        vector<int> freq(26,0);
        for(char ch :m){
            freq[ch-'a']++;
        }
        for(char ch :r){
            freq[ch-'a']--;
            if( freq[ch-'a'] <0){
                return false;
            }
        }
        return true;
    }
};
