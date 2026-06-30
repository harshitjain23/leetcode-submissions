class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,bool> seen;
        
        for(int i=0; i<nums.size() ; i++){
            if(seen[nums[i]]==1){
                return true;
            }else{
                seen[nums[i]]=1;
            }
        }
        return false;
    }
};