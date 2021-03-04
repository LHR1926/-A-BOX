class Solution {
public:
  vector<vector<int>> all_subsets;
  vector<int> subset;
  void subsetsWithDupHelper(vector<int> &nums, int startIndex) {
    all_subsets.push_back(subset);

    unordered_set<int> visited;
    for (int i = startIndex; i < nums.size(); ++i) {
      if (visited.count(nums[i]) == 0) {
        visited.insert(nums[i]);
        subset.push_back(nums[i]);
        subsetsWithDupHelper(nums, i + 1);
      } else {
        continue;
      }
      subset.pop_back();
    }
  }

  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    subsetsWithDupHelper(nums, 0);
    return all_subsets;
  }
};