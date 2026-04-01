class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> numbers = new HashSet<>();
        
        for (int num: nums) {
            if (numbers.add(num) == false) {
                return true;
            }
        }
        return false;
    }
}