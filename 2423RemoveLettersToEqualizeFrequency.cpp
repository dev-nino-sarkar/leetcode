class Solution {
public:
    bool equalFrequency(std::string word) {
        unordered_map<char, int> count;
        for (char c : word) {
            count[c]++;
        }

        for (char c : word) {
            count[c]--;
            if (count[c] == 0) {
                count.erase(c);
            }

            unordered_set<int> freqs;
            for (auto& pair : count) {
                freqs.insert(pair.second);
            }

            if (freqs.size() == 1) {
                return true;
            }

            count[c]++;
        }

        return false;
    }
};
