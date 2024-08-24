class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

    int n = digits.size();

    // Traverse the digits array from the last element to the first
    for (int i = n - 1; i >= 0; --i) {
        // Add one to the current digit
        digits[i] += 1;
        
        // If the digit is less than 10, we're done, return the result
        if (digits[i] < 10) {
            return digits;
        }
        
        // If the digit is 10, set it to 0 and carry the one to the next digit
        digits[i] = 0;
    }

    // If all digits were 9, we need to add a new digit at the beginning
    digits.insert(digits.begin(), 1);
    
    return digits;
}

int main() {
    vector<int> digits = {9, 9, 9};
    vector<int> result = plusOne(digits);
    
    // Print the result
    for (int digit : result) {
        cout << digit;
    }

    return 0;
}

    
};
