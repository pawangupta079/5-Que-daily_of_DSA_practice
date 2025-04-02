class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int mx = -1e9;
        if(n == 1) return 0;
        if(n == 2){
            if(nums[0] > nums[1]) return 0;
            else return 1;
        }
        nums.push_back(0);

        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) mx = max(mx,i);
        }
        if(mx < 0) return 0;
        return mx;
    }
};