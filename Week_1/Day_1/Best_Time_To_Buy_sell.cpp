class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0] ;
        int pro=0;
        int n= prices.size() ;
        for( int i=1; i<n; i++)
        {
            if( prices[i]> buy)
            {
                pro= max( pro, prices[i]-buy) ;
            }
            buy= min( buy, prices[i]) ;

         }
        if( pro >=0)
        {
            return pro;
        }
        else
        {
            return 0;
        }
       
    }
};
