class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
          unordered_map<int , int> value;

          for(int i=0 ; i<nums.size() ; i++){
            value[nums[i]]=i;
          }

          for(int i=0 ; i<nums.size() ; i++){
            int diff = target-nums[i];

             if(value.count(diff)&&value[diff]!=i)
             return {i , value[diff]}; 
          }


          return {};
        }
    
};
