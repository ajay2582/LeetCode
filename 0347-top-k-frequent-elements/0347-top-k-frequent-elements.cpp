class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Count frequency
        for (int num : nums) {
            mp[num]++;
        }

        // Maintain min heap of size k
        for (auto it : mp) {
            pq.push({it.second, it.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Extract elements from heap
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

       

        return result;
    }
};
