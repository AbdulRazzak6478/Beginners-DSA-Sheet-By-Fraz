#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            // for skipping duplicates i values
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++)
            {
                // for skipping duplicate j values
                if (j != i + 1 && nums[j] == nums[j - 1])
                    continue;

                int sum1 = target - (nums[i] + nums[j]);
                int front = j + 1;
                int back = nums.size() - 1;
                while (front < back)
                {
                    int sum2 = nums[front] + nums[back];
                    if (sum1 > sum2)
                        front++;
                    else if (sum1 < sum2)
                        back--;
                    else
                    {
                        vector<int> res = {nums[front], nums[back], nums[i], nums[j]};
                        ans.push_back(res);
                        while (front < back && nums[front] == res[0])
                            front++;
                        while (front < back && nums[back] == res[1])
                            back--;
                    }
                }
            }
        }
        return ans;
    }
};