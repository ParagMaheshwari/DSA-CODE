class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int>st(nums.begin(), nums.end());
        vector<int>ans ;
        for (auto it = st.rbegin();  it != st.rend() && ans.size() < k; it++){
            ans.push_back(*it);
        }
        return ans ;
    }
};





