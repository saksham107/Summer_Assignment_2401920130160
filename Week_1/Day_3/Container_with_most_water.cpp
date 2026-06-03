class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0 ;
        int n= height.size() ;
        int rp= n-1 ;
        int ans=0 ;
        while( lp< rp)
        {
            int wd= rp-lp ;
            int hi= min( height[rp], height[lp]) ;
            int capacity= wd*hi ;
            ans= max( ans, capacity) ;
            if( height[lp]< height[rp] )
            {
                lp++ ;
            }
            else
            {
                rp-- ;
            }

        }
        return ans;
    }
};
