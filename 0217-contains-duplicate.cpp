#include <bits/stdc++.h>
using namespace std;

/*
    Given int array, return true if any value appears at least twice
    Ex. nums = [1,2,3,1] -> true, nums = [1,2,3,4] -> false

    If the number has been seen previously, then it has a duplicate. Otherwise, insert it into the hash set.

    Time: O(n)
    Space: O(n)
*/

// --- Set / Hash Map Solution
class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
      if (s.find(nums[i]) != s.end())
      {
        return true;
      }
      s.insert(nums[i]);
    }
    return false;
  }
};

int main()
{
  Solution solution;
  vector<int> nums = {1, 2, 3, 1}; // Example input
  bool result = solution.containsDuplicate(nums);
  cout << (result ? "Contains Duplicate" : "No Duplicate") << endl;
  return 0;
}
