class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int current_sum=0,maximum_sum=INT_MIN;
      for(int i : nums){
        current_sum+=i;
        maximum_sum=max(current_sum,maximum_sum);
        if(current_sum <0){
            current_sum=0;
        }
      }
      return maximum_sum;
        
    }
};
