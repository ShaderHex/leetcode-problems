class Solution {
public:
    int reverseNumber(int num) {
        long long rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;

            num = num / 10;
        }
        return rev_num;
    }
    bool isPalindrome(int x) {
        int rev_num = reverseNumber(x);
        if(rev_num == x) {
            return true;
        } else {
            return false;
        }
    }
};
