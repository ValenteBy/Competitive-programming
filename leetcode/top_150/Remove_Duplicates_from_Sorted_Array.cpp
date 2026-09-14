class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k = 1, valor_anterior = nums[0];
        int duplicado = 1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == valor_anterior && duplicado < 2)
            {
                duplicado++;
                nums[k] = nums[i];
                k++;
            }else if(nums[i] != valor_anterior)
            {
                duplicado = 1;
                nums[k] = nums[i];
                k++;
            }

            valor_anterior = nums[i];
        }

        return k;
    }
};