class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // create hash map storing int keys, and bool values
        // allows us to check if something already exists or not
        unordered_map<int, bool> dupes;

        // iterates through array, setting true if located
        // if located twice returns true, meaning there is a dupe
        // else returns false meaning no dupe
        for( auto num : nums){
            if (dupes.contains(num) != true) dupes.emplace(num, true);
            else if (dupes[num] == true) return true;
        };
        return false;
    }
};