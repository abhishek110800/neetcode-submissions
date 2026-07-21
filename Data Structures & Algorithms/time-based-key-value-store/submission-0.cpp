class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;

public:
    TimeMap() { }

    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end()) return "";

        auto &v = mp[key];                       // list of (time, value)
        int l = 0, r = (int)v.size() - 1;
        string ans = "";

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (v[mid].first <= timestamp) {     // time is valid (<= asked time)
                ans = v[mid].second;             // store candidate answer
                l = mid + 1;                     // try to find a later valid time
            } else {
                r = mid - 1;                     // need smaller time
            }
        }
        return ans;
    }
};
