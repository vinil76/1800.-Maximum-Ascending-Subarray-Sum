#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

int maxAscendingSum(vector<int> &nums)
{
    int MaxSub = 0;
    int CurSub = nums[0];
    MaxSub = max(MaxSub, CurSub);
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > nums[i - 1])
        {
            CurSub += nums[i];
        }
        else
        {
            CurSub = nums[i];
        }
        MaxSub = max(MaxSub, CurSub);
    }
    return MaxSub;
}
int main()
{
    vector<int> nums = {100, 1, 10};
    cout << maxAscendingSum(nums) << endl;
    return 0;
}