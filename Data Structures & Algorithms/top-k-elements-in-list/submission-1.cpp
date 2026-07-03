class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        // Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // Store {frequency, number}
        vector<pair<int, int>> freq;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            freq.push_back({it->second, it->first});
        }

        // Sort according to frequency
        sort(freq.begin(), freq.end());

        vector<int> ans;

        // Take the last k elements
        for (int i = freq.size() - 1; i >= 0 && k > 0; i--) {
            ans.push_back(freq[i].second);
            k--;
        }

        return ans;
    }
};