class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for (int i = low; i <= high; i++) {
            string s = to_string(i);
            int len = s.length();

            if (len % 2 != 0) continue; // ��Ƥ��O���ơA���L

            int half = len / 2;
            int sum1 = 0, sum2 = 0;

            for (int j = 0; j < half; j++) sum1 += s[j] - '0';
            for (int j = half; j < len; j++) sum2 += s[j] - '0';

            if (sum1 == sum2) ans++;
        }
        return ans;
    }
};
