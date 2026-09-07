class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Check karo agar current number agle number se bada hai
            // (i + 1) % n ka matlab: last element ke case mein index 0 se check hoga
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        // Agar drop 1 ya 0 hai toh valid rotation hai, warna false
        return count <= 1;
    }
};