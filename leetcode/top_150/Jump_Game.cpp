class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maior = nums[0], it = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            if(i == nums.size() - 1)
            {
                return true;
            }

            int valor_atual = (maior - it);
            if(valor_atual < nums[i])
            {
                maior = nums[i];
                it = 1;
            }else if(nums[i] == 0)
            {
                return false;
            }
            else
                it++;      
        }
        return true;
    }
};