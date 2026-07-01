class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int maximum=0;

        for(int i=0; i< nums.size() ; i++){
            if(count==0){
                maximum=nums[i];
            }

            if(nums[i]==maximum){
                count ++;
            }
            else 
            count --;
        }
        return maximum;
    }
};