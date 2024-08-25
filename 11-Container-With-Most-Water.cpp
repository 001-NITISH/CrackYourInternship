class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        int l = 0; int r = heights.size()-1;
        // int area = 0;

        while(l < r){
            int mini = min(heights[l], heights[r]);
            int area = mini * (r-l);
            ans = max(area, ans);

            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return ans;
    }
};