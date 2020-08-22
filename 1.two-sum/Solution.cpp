#include "Solution.h"

/*
    Given an array of integers, return indices of the two numbers such that they add up to a specific target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    Example:
    Given nums = [2, 7, 11, 15], target = 9,
    Because nums[0] + nums[1] = 2 + 7 = 9,
    return[0, 1].
*/

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    vector<int> response;
    map<int, int> hash_list;

    for (size_t i = 0; i < nums.size(); i++)
    {
        int difference = target - nums[i];

        if (hash_list.find(difference) != hash_list.end())
        {
            response.push_back(hash_list[difference]);
            response.push_back(i);
            break;
        }

        hash_list[nums[i]] = i;
    }

    return response;
}
