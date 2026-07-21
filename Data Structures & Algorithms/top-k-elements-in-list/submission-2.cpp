class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;

    // 1. Count frequency of each number
    for (int num : nums) {
        freq[num]++;
    }

    // 2. Create buckets: index = frequency, value = list of numbers
    int n = nums.size();
    vector<vector<int>> buckets(n + 1);

    for (auto &p : freq) {
        int number = p.first;
        int count = p.second;
        buckets[count].push_back(number);
    }

    // 3. Collect results from highest frequency to lowest
    vector<int> result;
    for (int i = n; i >0 ; i--) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == k)
            return result;
        }
    }

    
}
};
