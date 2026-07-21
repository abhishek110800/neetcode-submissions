class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int res = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        long long totalTime = 0;

        for (int pile : piles) {
            totalTime += (pile + mid - 1) / mid;
        }

        if (totalTime <= h) {
            res = mid;
            high = mid - 1;  // try smaller k
        } else {
            low = mid + 1;  // increase k
        }
    }

    return res;
    }
};
