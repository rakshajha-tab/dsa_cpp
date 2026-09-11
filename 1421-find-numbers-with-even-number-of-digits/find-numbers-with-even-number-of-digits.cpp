class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int num : nums){
            int digit = to_string(num).length();
            if(digit % 2 == 0){
                count++;
            }
        }
        return count;
        
    }
};