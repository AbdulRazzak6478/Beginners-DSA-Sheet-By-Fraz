#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        // TC : O(N*N)

        vector<vector<int>> ans;
        if (nums.size() == 0 || nums.size() == 1)
        {
            return ans;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i == 0 || (nums[i] != nums[i - 1])) // skipping the Elements which are equal or exits before
            {
                int s = i + 1, e = nums.size() - 1, right = 0 - nums[i];
                while (s < e)
                {
                    int sum = nums[s] + nums[e];
                    if (sum == right)
                    {

                        ans.push_back({nums[i], nums[s], nums[e]});
                        while (s < e && nums[s] == nums[s + 1])
                            s++;
                        while (s < e && nums[e] == nums[e - 1])
                            e--;
                        // break;
                        s++;
                        e--;
                    }
                    else if (sum < right)
                    {
                        s++;
                    }
                    else
                    {
                        e--;
                    }
                }
            }
        }
        return ans;
    }
};
