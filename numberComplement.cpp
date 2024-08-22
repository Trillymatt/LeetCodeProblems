class Solution {
public:
    int findComplement(int num) {
        //convert integer to binary complement it then     convert back to int
        int result = 0;
        int bit_position = 0;

        while (num > 0) {
            int bit = num % 2;
            int complement_bit = (bit == 0) ? 1 : 0;

            result += complement_bit * pow(2, bit_position);

            num /= 2;
            bit_position++;
        }
        return result;
    }
};
