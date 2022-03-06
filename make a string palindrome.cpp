class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int left=0,right=s.length()-1;
        int ans=0;
        while(left<right){
            int l=left,r=right;
            if(s[l]!=s[r]){
            while(s[l]!=s[r])r--;
            if(r==l){swap(s[r],s[r+1]),ans++;continue;}
            else{
                while(r<right){swap(s[r],s[r+1]),ans++,r++;}
            }}
            left++;right--;
        }
    return ans;
        
    }
};
