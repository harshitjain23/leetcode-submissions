class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0;
        int e = nums.size()-1;
        int i=0;
        while(i<e+1){
            
            if(nums[i]==0){
                swap(nums[i++],nums[s++]);
               
            }else
            if(nums[i]==2){
                swap(nums[i],nums[e--]);
               
            }
            else {
              i++;
               
            }
        
        }
    }
};