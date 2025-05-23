//  Two Sum problem

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
class Solution {
public:
    // Function to find two indices such that their values add up to the target
    vector<int> twoSum(vector<int>& nums, int target) {
        // Loop through each element except the last
        for (int i = 0; i < nums.size() - 1; i++) {
            // Loop through the elements after the current element
            for (int j = i + 1; j < nums.size(); j++) {
                // Check if the sum equals the target
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return the indices
                }
            }
        }
        return {}; // Return empty vector if no solution found
    }
};