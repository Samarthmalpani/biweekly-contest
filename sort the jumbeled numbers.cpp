class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            int num=0;
            for(int i=0;i<s.length();i++){
                num=num*10+mapping[s[i]-'0'];
            }
            v.push_back({num,i});
        }
        vector<int>ans;
        sort(v.begin(),v.end());
        for(auto t:v){
            ans.push_back(nums[t.second]);
        }
        return ans;
        
    }
};
