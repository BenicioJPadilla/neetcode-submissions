class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> dupe;

        for (int num : nums){
            if (dupe.contains(num) == true) return true;

            else dupe.emplace(num, true);
        }

        return false;
    }
};