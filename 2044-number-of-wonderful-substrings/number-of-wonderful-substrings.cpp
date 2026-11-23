class Solution {
public:
    long long wonderfulSubstrings(string word) {

        long long ans = 0;

        vector<long long> count(1024, 0);

        int mask = 0;

        count[0] = 1;

        for(int i = 0; i < word.length(); i++) {

            int bit = word[i] - 'a';

            mask = mask ^ (1 << bit);

            // Case 1: All characters have even frequency
            ans = ans + count[mask];

            // Case 2: Exactly one character has odd frequency
            for(int j = 0; j < 10; j++) {
                int temp = mask ^ (1 << j);
                ans = ans + count[temp];
            }

            count[mask]++;
        }

        return ans;
    }
};