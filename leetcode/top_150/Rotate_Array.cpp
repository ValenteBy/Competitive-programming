class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(), nums.end());
        for(int i = 0; i < k; i++){
            int pn = nums.front();
            nums.push_back(pn);
        }
        reverse(nums.begin(), nums.end());
        for(int i = 0; i < k; i++){
            nums.pop_back();
        }
    }
};