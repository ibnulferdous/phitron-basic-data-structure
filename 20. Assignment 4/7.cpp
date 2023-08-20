#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre_sum;
        int sum = 0;

        for (int i : nums)
        {
            sum += i;
            pre_sum.push_back(sum);
        }

        for (int i = 0, sz = pre_sum.size(); i < sz; i++)
        {
            int l_sum = i == 0 ? 0 : pre_sum[i - 1];
            int r_sum = i == sz - 1 ? 0 : sum - pre_sum[i];

            cout<<"index: "<<i<<endl;
            if (l_sum == r_sum) return i;
        }

        return -1;
    }
};

int main(void)
{
    vector<int> v = {1,7,3,6,5,6};
    Solution s;
    s.pivotIndex(v);

    return 0;
}

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11