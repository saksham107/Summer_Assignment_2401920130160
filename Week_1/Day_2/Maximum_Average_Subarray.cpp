class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double ave;
        // double ans;
        // int i=0;
        // int j=i+k-1;
        int sum=0;
        for(int i=0; i< k;i++){
            sum +=nums[i];
        }
        int maxS=sum;
        for(int i=k; i<nums.size(); i++){
            sum -=nums[i-k];
            sum +=nums[i];
            maxS= max(maxS,sum);
        }
        return (double)maxS/k;
    }
};
