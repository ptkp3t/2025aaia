class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) { // �u�n n �٦��Ʀr�A�N��֡A�鱼 3 ������
            // n % 3 �|�ѤU����H �� 1 �ܦn�A�� 0 �ܦn�A���� 2 �N���n
            if (n % 3 == 2) return false;
            n = n / 3; // �鱼 3 ������
        }
        return true;
    }
};
