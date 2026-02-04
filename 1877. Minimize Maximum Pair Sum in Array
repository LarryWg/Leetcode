class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int res = 0, r = 0;
        int l = nums.size() - 1;
        sort(nums.begin(), nums.end());
        while(r < l){
            int curr = nums[r] + nums[l];
            if (curr > res){
                res = curr;
            }
            r++;
            l--;
        }
        return res;

    }
};
