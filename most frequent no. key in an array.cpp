class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        int a=0,ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=0;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                if(i+1>=nums.size())continue;
                mp[nums[i+1]]++;
            }
            if(i+1<nums.size() && mp[nums[i+1]]>a){
                a=mp[nums[i+1]];
                ans=nums[i+1];
            }
        }
        return ans;
        
    }
};
