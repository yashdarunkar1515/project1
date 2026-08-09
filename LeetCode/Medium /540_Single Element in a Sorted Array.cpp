class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        int str = 0, end = n - 1;

        while (str <= end) {
            int mid = str + (end - str) / 2;

            // First element
            if (mid == 0) {
                if (nums[0] != nums[1])
                    return nums[0];

                str = mid + 1;
                continue;
            }

            // Last element
            if (mid == n - 1) {
                if (nums[n - 1] != nums[n - 2])
                    return nums[n - 1];

                end = mid - 1;
                continue;
            }

            // Middle element
            if (nums[mid - 1] != nums[mid] &&
                nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // Even index
            if (mid % 2 == 0) {
                if (nums[mid - 1] == nums[mid]) {
                    end = mid - 1;
                } else {
                    str = mid + 1;
                }
            }

            // Odd index
            else {
                if (nums[mid - 1] == nums[mid]) {
                    str = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};
