class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zero_count = 0;
        int product_without_zero = 1;
        
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zero_count++;
            } else {
                product_without_zero *= nums[i];
            }
        }

        vector<int> ans;

       
        for (int i = 0; i < n; i++) {
            if (zero_count > 1) {
                
                ans.push_back(0);
            } 
            else if (zero_count == 1) {
                
                if (nums[i] == 0) {
                    ans.push_back(product_without_zero);
                } else {
                    ans.push_back(0);
                }
            } 
            else {
               
                ans.push_back(product_without_zero / nums[i]);
            }
        }

        return ans;
    }
};