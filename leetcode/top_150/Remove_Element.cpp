class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k = nums.size();
        int cont = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums[i] = 51;
                cont++;
            }
        }
        sort(nums.begin(), nums.end());
        return k - cont;
    }
};