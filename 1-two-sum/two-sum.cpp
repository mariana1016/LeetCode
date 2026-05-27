class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //create a hashmap to store the nums and their respective index. as it goes through each number, keep track of ones already seen
        map<int, int> already_seen;
    //create for loop to check if the result and number[i] are equal to the target, so that would mean the result is equal to the target - the number[i]
        for(int i = 0; i < nums.size(); i++){
            int result = target - nums[i];
    //if the result was already seen earlier, return 1, if it has not been seen return 0
              if (already_seen.count(result)){
                return {
    //already_seen and result show the exact index where the result was stores
                    already_seen[result], i
                };
            }
    //the result has not been found yet, so store for future use
            already_seen[nums[i]] = i;
        }
        //return empty just incase
        return{};
    }
    
};