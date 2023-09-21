class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     vector<int>arr;
     int n=nums.size();
     for(int i=0;i<n;i++){
         if(nums[i]!=0){
             arr.push_back(nums[i]);
            }
        }
        int z=arr.size();
        for(int i=0;i<z;i++){
            nums[i]=arr[i];
        }
        for(int i=z;i<n;i++){
            nums[i]=0;
        }
    }
};