class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::size_t size = nums.size();
        for (std::size_t i {0}; i < size; i++ ) {
            for (std::size_t j {i + 1}; j < size; j++) {
                    if (nums[i] == nums[j]) {
                     return true;
                }
            }
         }
        return false;
    }
};