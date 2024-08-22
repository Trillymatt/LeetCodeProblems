/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer num, return its complement.

 

Example 1:

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
Example 2:

Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
*/
    
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
