class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> myHashSet;

        for (const auto& i: nums) {
            if (myHashSet.insert(i).second == false) {
               return true;
            }
        }
        return false;
    }
};