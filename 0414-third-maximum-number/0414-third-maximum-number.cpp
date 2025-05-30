class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end()); // Insert all elements at once

        // If there are fewer than 3 unique elements, return the largest
        if (st.size() < 3) {
            auto it = st.end();
            it--;
            return *it;
             // The largest element
        }
        
        // Move reverse iterator to the third largest element
        auto it = st.end();
        it--;
        it--;
        it--;

        return *it;
    }
};

