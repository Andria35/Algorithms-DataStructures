#pragma once
#include <iostream>
#include <vector>
#include <string>

std::vector<int> two_sum(const std::vector<int> &nums, int target);
std::string longestCommonPrefix(std::vector<std::string> &strs);
int removeDuplicates(std::vector<int> &nums);
int removeElement(std::vector<int> &nums, int val);
int binarySearch(std::vector<int> &nums, int target);
int searchInsert(std::vector<int> &nums, int target);
std::vector<int> plusOne(std::vector<int> &digits);
void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n);

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* sortedArrayToBST(std::vector<int>& nums);