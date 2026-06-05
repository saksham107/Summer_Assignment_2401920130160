class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int n= s.size();
        while( st< n/2){
            swap( s[st], s[n-st-1]);
            st++;
        }
    }
};
