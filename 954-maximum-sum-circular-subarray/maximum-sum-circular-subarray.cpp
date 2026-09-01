class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int totalSum = 0;

        int currMax = 0;
        int maxSum = nums[0];

        int currMin = 0;
        int minSum = nums[0];

        for (int num : nums) {

            // Total array sum
            totalSum += num;

            // Maximum subarray sum
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);

            // Minimum subarray sum
            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);
        }

        // If all elements are negative
        if (maxSum < 0)
            return maxSum;

        // Maximum of normal and circular subarray
        return max(maxSum, totalSum - minSum);
    }
};