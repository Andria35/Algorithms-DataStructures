#include <iostream>
#include <vector>
#include "array.hpp"
#include <unordered_map>
#include <string>

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

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if(strs.empty()) { return ""; }
    std::string firstString = strs.at(0);
    int prefixLength = firstString.length();

    for (int i = 1; i < strs.size(); i++) {
        std::string currentString = strs.at(i);
        if(currentString.length() < prefixLength) { prefixLength = currentString.length();}

        for (int j = 0; j < prefixLength; j++) {
            if (firstString[j]!= currentString[j]) {
                prefixLength = j;
                break;
            }
        }
        if (prefixLength == 0) return "";

    }
    return firstString.substr(0, prefixLength);
}

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) return 0;

    int k = 1;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != nums[i-1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int removeElement(std::vector<int>& nums, int val) {
    int k = 0;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] != val) {
            if(k < i) nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int binarySearch(std::vector<int>& nums, int target) {
    if (nums.empty()) return -1;
    int left = 0;
    int right = nums.size() - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(target == nums[mid]) return mid;
        if(target < nums[mid]) {
            right = mid - 1;
        }
        if(target > nums[mid]) {
            left = mid + 1;
        }
    }

    return -1;
}

int searchInsert(std::vector<int>& nums, int target) {
    if(nums.empty()) return -1;
    int left = 0;
    int right = nums.size() - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(target == nums[mid]) return mid;
        if(target < nums[mid]) right = mid - 1;
        if(target > nums[mid]) left = mid + 1;
    }
    return left;
}

std::vector<int> plusOne(std::vector<int>& digits) {

    for(int i = digits.size() - 1; i >= 0; i--) {
        if(digits[i] != 9) {
            digits[i]++;
            return digits;
        }
        if(i == 0) {
            digits[0] = 1;
            digits.push_back(0);
        } else {
        digits[i] = 0;
        }
    }
    return digits;
}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while(j >= 0) {
        if(i >= 0 && nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
}

TreeNode* sortedArrayToBST(std::vector<int>& nums) {

    auto build = [&](auto&& self, int l, int r) -> TreeNode* {
        if(l > r) return nullptr;
        int mid = l + (r - l) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = self(self, l, mid - 1);
        root->right = self(self, mid + 1, r);

        return root;
    };

    return build(build, 0, nums.size() - 1);
}

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> result;
    for(int i = 0; i < numRows; i++) {
        if(i == 0) result.push_back({1});
        // int lastIndex = i - 1;
        std::vector<int> row;
        for(int j = 0; j < i; j++) {
            if(j == 0 || j == i - 1) row.push_back(1);
            row.push_back(result[i-1][j-1] + result[i-1][j]);
        }
        result.push_back(row);
    }

    return result;
}