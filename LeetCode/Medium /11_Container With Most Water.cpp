class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right = height.size()-1;
        int maxwater=0;

        for(int i=0;i<height.size();i++)
        {
            int w= right-left;
            int h= min(height[left],height[right]);
            int a= h*w;

        maxwater= max(maxwater,a);

        if(height[left]<height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
            
        }
        return maxwater;
    }
};
