class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> helper;
        int MOD = 1'000'000'007;
        long long ans=0;
        for(int i=0;i<n;i++){
            int res=0;
            for(int j=i;j<n;j++){
               res+=nums[j];
               helper.push_back(res);
            }
        }
        sort(helper.begin(),helper.end());
        left--;
        right--;
        while(left<=right){
            ans=(ans+helper[left]) % MOD;
            left++;
        }
        return ans;
    }
};