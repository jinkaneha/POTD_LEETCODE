class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto ch:arr){
            mp[ch]++;
        }
        int count =0;
        for(auto &c:arr){
          if (mp[c] == 1) {
            count++;
            if (count == k) {
                return c;
            }
        }
        }
        return "";
    }
};