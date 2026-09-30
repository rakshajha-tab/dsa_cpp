class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++) {
            while (mid <= high) {
                if (nums[mid] == 0) {
                    nums[mid] = nums[low];
                    nums[low] = 0;
                    low++;
                    mid++;
                }
                else if(nums[mid] == 1){
                    mid++;
                }
                else{
                    nums[mid] = nums[high];
                    nums[high] = 2;
                    high--;
                }
            }
        }
    }
};