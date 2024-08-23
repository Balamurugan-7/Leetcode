class Solution {
public:
    int findComplement(int num) {
        if(num <= 1) return !num;
        unsigned int m = ~0;
        while(num & m)
            m <<= 1;
        return ~m & ~num;
    }
};