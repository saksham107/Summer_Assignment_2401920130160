class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int i=0;
        // //int j=nums.size()-1;
        int j=0;
        for(int i=0; i< nums.size(); i++){
           if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
           }
        }
    }
};
