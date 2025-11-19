class Solution:
    def romanToInt(self, s: str) -> int:
        stack = []
        total = 0
        romans = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }
        for value in range(len(s)):
            if value + 1 < len(s) and romans[s[value]] < romans[s[value + 1]]:
                total -= romans[s[value]] 
            else:
               total += romans[s[value]]
        return total            
