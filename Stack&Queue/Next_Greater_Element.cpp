class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    j++;
                    int n = nums1[i];
                    while (j < nums2.size())
                    {
                        if (nums1[i] < nums2[j])
                        {
                            nums1[i] = nums2[j];
                            break;
                        }
                        j++;
                    }
                    if (nums1[i] == n)
                    {
                        nums1[i] = -1;
                        break;
                    }
                }
            }
        }
        return nums1;
    }
};