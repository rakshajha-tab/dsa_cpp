class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long windowSum = 0;
        long long maxSum = 0;

        // First window of size k
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
            freq[nums[i]]++;
        }

        if (freq.size() == k) {
            maxSum = windowSum;
        }

        // Slide the window
        for (int i = k; i < nums.size(); i++) {
            // Remove the element going out of the window
            int out = nums[i - k];
            windowSum -= out;
            freq[out]--;

            if (freq[out] == 0) {
                freq.erase(out);
            }

            // Add the new incoming element
            int in = nums[i];
            windowSum += in;
            freq[in]++;

            // Update maxSum if all k elements are distinct
            if (freq.size() == k) {
                maxSum = max(maxSum, windowSum);
            }
        }

        return maxSum;
    }
};