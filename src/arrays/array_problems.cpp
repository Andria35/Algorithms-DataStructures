#include <iostream>
#include <vector>
#include "array.hpp"
#include <unordered_map>

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Input: nums = [3,2,4], target = 6
Output: [1,2]

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/
std::vector<int> two_sum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hash_table;
    std::vector<int> result;

    for(size_t i = 0; i < nums.size(); ++i) {
        int a = nums[i];
        int b = target - a;

        auto element = hash_table.find(b);
        if (element != hash_table.end()) {
            result.push_back(element->second);
            result.push_back(static_cast<int>(i));
            break;
        } else {
            hash_table[a] = static_cast<int>(i);
        }
    }

    return result;
}
