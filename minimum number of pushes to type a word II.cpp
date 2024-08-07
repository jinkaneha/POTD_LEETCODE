class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(char c:word){
            mp[c]++;
        }
        vector<int> counts;
        for(auto& c:mp){
            counts.push_back(c.second);
        }
        sort(counts.rbegin(),counts.rend());
        int res=0;
        for(int i=0;i<counts.size();i++){
            int digit=(i/8)+1;
            res+=digit*counts[i];
        }
        return res;
    }

  
};