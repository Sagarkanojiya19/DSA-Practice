// find dupplicates in N+1 integers -> By using Floyd cycle detection algorithm...
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0];
    cout << "slow: " << slow << endl;
    int fast = nums[0];
    cout << "fast: " << fast << endl;

    while (true)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
        cout << "slow: " << slow << endl;

        cout << "fast: " << fast << endl;

        if (slow == fast)
        {
            break;
        }
    }
    int slow2 = nums[0];
    cout << "slow2: " << slow2 << endl;

    while (slow != slow2)
    {
        slow = nums[slow];
        cout << "slow: " << slow << endl;

        slow2 = nums[slow2];
        cout << "slow2: " << slow2 << endl;
    }
    return slow;
}
int main()
{
    vector<int> nums = {1,2,3,4,4};
    cout << "Duplicate element is: " << findDuplicate(nums);
}