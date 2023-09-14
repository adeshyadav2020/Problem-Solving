class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int zeroes, ones, twos;
        zeroes = ones = twos=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zeroes++;
            }
            else if(nums[i]==1){
                ones++;
            }
            else {
                twos++;
            }
        }
        int i=0;
        while(zeroes--){
            nums[i]=0;
            i++;
        }
        while(ones--){
            nums[i]=1;
            i++;
        }
        while(twos--){
            nums[i]=2;
            i++;
        }
    }
};