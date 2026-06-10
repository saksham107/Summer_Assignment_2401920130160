class Solution {
public:
    int strStr(string ha, string ne) {
        int n= ha.size();
        int m=ne.size();
        for(int i=0; i<=n-m ; i++){
            int j=0;
            while(j<m && ha[i+j]==ne[j]){
                j++;
            }
            if(j==m){
                return i;
            }
            
        }
        return -1;
    }
};
