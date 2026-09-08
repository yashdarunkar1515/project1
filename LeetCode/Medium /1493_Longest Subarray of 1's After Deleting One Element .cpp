class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int zerocnt=0;
      int maxone =0;
      int start=0;

      for(int end=0;end< nums.size();end++){
          if(nums[end]==0){
            zerocnt++;
          }
          while(zerocnt>1){
             if(nums[start]==0){
              zerocnt--;
             }
             start++;
          }
          maxone=max(maxone,end-start);
      }
      return maxone;
    }
};
