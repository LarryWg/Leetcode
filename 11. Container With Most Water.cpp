class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int l = 0;
        int r = height.size() - 1;
        while (l < r){
            res = max(res, (r - l) * min(height[l], height[r]));
            if (height[r] < height[l]){
                r--;
            } else {
                l++;
            }
        }

        return res;
    }
};
