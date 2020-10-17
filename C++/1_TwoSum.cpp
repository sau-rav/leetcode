/* Two Sum 

Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 

Approach : Use hashmap to keep track of values visited till now and if standing at i we search if target - i has already been visited and use those two indexes for our result

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            int numberToFind = target - nums[i];
            auto it = hash.find(numberToFind);
            if (it != hash.end()) {
                res.push_back(it->second); // to int
                res.push_back(i);
                return res;
            }
            hash[nums[i]] = i;
        }
        vector<int> v{0};
        return v;
    }
};
