class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int sec=target-first;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==sec){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
