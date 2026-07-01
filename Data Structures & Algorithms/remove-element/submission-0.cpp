class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        while (true) {
         auto it = find(nums.begin(), nums.end(), val);

       if (it == nums.end())
        break;

        nums.erase(it);
}
          return nums.size();
    }
};




