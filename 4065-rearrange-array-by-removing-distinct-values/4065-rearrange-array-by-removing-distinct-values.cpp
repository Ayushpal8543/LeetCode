class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        while (!nums.empty()) {
           set<int> s;
           for (int x : nums) {
              s.insert(x);
           }
           for (int x : s) {
              ans.push_back(x);
           }
           for (int x : s) {
              auto it = find(nums.begin(), nums.end(), x);
              nums.erase(it);
           }
        }

        return ans;
        
    }
};