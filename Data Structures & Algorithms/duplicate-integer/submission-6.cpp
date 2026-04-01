class Solution {
public:
   bool hasDuplicate(vector<int>& nums) {
    std::unordered_set<int> key;

    for (const auto& num: nums) {
        if (key.insert(num).second == false) {
            return true;
        }
    }

    return false;
}
};