class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>mpp(26,0);
        for(auto it:s){
            mpp[it-'a']++;
        }
        for(auto it:t){
            mpp[it-'a']--;
        }
        for(auto it:mpp){
            if(it<0 || it>0)return false;
        }
        return true;
    }
};
