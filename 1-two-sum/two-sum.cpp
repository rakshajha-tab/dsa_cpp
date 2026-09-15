class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int n = sorted.size();
        int i = 0;
        int j = n - 1;

        while(i < j) {
            int pairSum = sorted[i] + sorted[j];

            if(pairSum > target) {
                j--;
            }
            else if(pairSum < target) {
                i++;
            }
            else {
                int left = sorted[i];
                int right = sorted[j];

                // first number ka original index
                for(i = 0; i < n; i++) {
                    if(nums[i] == left) {
                        ans.push_back(i);
                        break;
                    }
                }

                // second number ka original index
                for(j = 0; j < n; j++) {
                    if(nums[j] == right && j != ans[0]) {
                        ans.push_back(j);
                        break;
                    }
                }

                return ans;
            }
        }

        return ans;
    }
};