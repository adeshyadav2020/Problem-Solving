class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len=nums.size();
        vector<int> s;
        for(int i=0; i<len; i++){
            s.insert(s.begin()+i,nums[i]);
        }
        for(int i=0; i<len; i++){
            s.insert(s.begin()+len+i,nums[i]);
        }
        return s;
    }
};