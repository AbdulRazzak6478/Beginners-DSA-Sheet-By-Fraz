class Solution
{
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    /*
  // Approache 1 :
  // TC : O(N^2)
  // SC : O(1)
 int n=nums.size();
 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         if(nums[i]+nums[j]==target)
         {
             return {i,j};
         }
     }
 }
 return {-1,-1};
  */

    /*
    // Approache 2 :
    //   TC : O(N)
    //   SC : O(N)
    unordered_map<int ,int >m;
    int n=nums.size();
    for (int i = 0; i < n; i++)
    {
        int x=nums[i];
        int y=target-x;
        if(m.find(y)!=m.end())
        {
            return {i,m[y]};
        }
        m[nums[i]]=i;
    }
    return {-1,-1};
    */

    /*
    // Approache 3 :
    //    TC : O(NlogN) + O(N)
    //    SC : O(N)
     vector<pair<int, int>> v;
     int n = nums.size();
     for (int i = 0; i < n; i++)
     {
         v.push_back({nums[i], i});
     }
     sort(v.begin(), v.end());
     int s = 0, e = n - 1;
     while (s < e)
     {
         int sum = v[s].first+v[e].first;
         if (sum == target)
         {
             return {v[s].second,v[e].second};
         }
         else if (sum < target)
             s++;
         else
             e--;
     }
     return {-1,-1};

    */

    /*
        Approache 4 :
         TC : O(NlogN)for sorting +O(N*logN)for operation
         SC : O(1)

        - Sort array and take 1st element A
        - then B = target -A
        - then apply binary Search on rest of the array is this B element present or not
            if yes store them
            else
                continue
        */
    // }
};