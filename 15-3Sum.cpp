class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>st;

        for(int i=0; i<n-2; i++){
            set<int>mp;
            for(int j=i+1; j<n; j++){
                int third = 0 - (nums[i] + nums[j]);
                if(mp.find(third) != mp.end()){
                    vector<int>temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                mp.insert(nums[j]);
            }
        }
        if(st.size() == 0) return {};
        vector<vector<int>>ans (st.begin(), st.end());
        return ans;
    }
};