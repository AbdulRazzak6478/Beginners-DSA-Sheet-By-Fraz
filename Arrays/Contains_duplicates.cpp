class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        if (s.size() != nums.size())
            return true;
        return false;

        // Approache : 2
        // map<int,int>m;
        //     int n=nums.size();
        //     for(int i=0;i<nums.size();i++)
        //     {
        //         if(2==++(m[nums[i]]))return true;
        //     }
        // return false;
    }
};