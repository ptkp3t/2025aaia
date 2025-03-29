class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) { // 只要 n 還有數字，就剝皮，剝掉 3 的倍數
            // n % 3 會剩下什麼？ 剩 1 很好，剩 0 很好，但剩 2 就不好
            if (n % 3 == 2) return false;
            n = n / 3; // 剝掉 3 的倍數
        }
        return true;
    }
};
