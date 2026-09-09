class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            
            int sumleft = 0;
            int sumright = 0;

            
            for(int j = 0; j < i; j++) {
                sumleft += nums[j];
            }

            
            for(int j = i + 1; j < n; j++) {
                sumright += nums[j];
            }

            if(sumleft == sumright) {
                return i;
            }
        }

        return -1;
    }
};
