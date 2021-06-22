class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            map[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            if(map.count(target - nums[i]) && i != map[target - nums[i]]){ //后面的条件相当于创建了key
                ans.push_back(i);
                ans.push_back(map[target - nums[i]]);
                return ans;
            }
        }
        return ans;
    }
};
