class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // hashmap that stores distance from target and position
        unordered_map <int, int> dis_pos;

        // will let us know what position a distance is at
        // go through each num
        // check if it is the neccesary distance another pair needs
        // if it is, it returns that pair
        // if not returns an empty array
        for (auto i = 0; i <= nums.size()-1; i++) {

            auto distance =  target - nums[i];

            cout << distance << endl;

            if (dis_pos.contains(distance)){
                return {dis_pos[distance], i};
            }

            dis_pos.emplace(nums[i], i);
        }

        return {};
    }
};
