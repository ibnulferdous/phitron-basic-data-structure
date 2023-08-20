#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> pre_sum_arr, result;
        int total = 0;
        int sz = nums.size();

        // If the array has only one element, return 0
        if (sz == 1) 
        {
            result.push_back(0);
            return result;
        }

        for (int i = 0; i < sz; i++)
        {   
            total += nums[i];
            pre_sum_arr.push_back(total); 
        }
        
        for (int i = 0; i < sz; i++)
        {   
            int left_sum = 0, right_sum = 0, result_val = 0;

            left_sum = i == 0 ? 0 : pre_sum_arr[i - 1];
            right_sum = i == sz - 1 ? 0 : pre_sum_arr[sz - 1] - pre_sum_arr[i];

            result_val = abs(left_sum - right_sum);
            result.push_back(result_val);
        }

        return result;
    }
};

int main(void)
{
    vector<int> v = {10,4,8,3};
    Solution s;
    s.leftRightDifference(v);

    return 0;
}

// Input: nums = [10,4,8,3]
// Output: [15,1,11,22]
// Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
// The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].