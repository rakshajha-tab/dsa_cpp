class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;
        int currMax = 0, maxSum = nums[0];
        int currMin = 0, minSum = nums[0];

        for (int x : nums) {
            totalSum += x;

            // Kadane's for max subarray
            currMax = max(x, currMax + x);
            maxSum = max(maxSum, currMax);

            // Kadane's for min subarray
            currMin = min(x, currMin + x);
            minSum = min(minSum, currMin);
        }

        // If all elements are negative, totalSum == minSum, so return maxSum
        if (maxSum < 0)
            return maxSum;

        return max(maxSum, totalSum - minSum);
    }
};