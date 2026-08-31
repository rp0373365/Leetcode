class Solution {
public:
    bool better(string a, string b) {
        if (a.size() != b.size()) {
            return false;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            return true;
        }
        return false;
    }
    bool optimal(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char , int >mp;
        for (char c : s) {
            mp[c]++;
        }
        for (char c : t) {
            mp[c]--;
        }
        for (int i = 0; i < 256; i++) {
            if (mp[i] != 0) {
                return false;
            }
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        if (optimal(s, t)) {
            return true;
        }
        return false;
    }
};