class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size()< p.size()){
            return ans;
        }

        vector<int> pf(26,0);
        vector<int> wf(26,0);

        for(char ch:p){
            pf[ch-'a']++;
        }
        int k=p.size();

        for( int i=0; i<k; i++){
            wf[s[i]-'a']++;
        }
        if(wf== pf){
            ans.push_back(0);
        }

        for(int i=k; i<s.size(); i++){
            wf[s[i-k]-'a']--;
            wf[s[i]-'a']++;

            if(wf == pf){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};
