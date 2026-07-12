// BASIC OPERATIONS
AND (&)  : Both 1 → 1
OR  (|)  : Either 1 → 1
XOR (^)  : Different → 1
NOT (~)  : Flip all bits
<<       : Shift left (multiply by 2)
>>       : Shift right (divide by 2)

// COMMON TRICKS
n & 1                  // Check if odd
n & (1 << i)          // Check if ith bit is set
n | (1 << i)          // Set ith bit
n & ~(1 << i)         // Clear ith bit
n ^ (1 << i)          // Toggle ith bit
n & (n - 1)           // Remove rightmost 1 bit
n & -n                // Get rightmost 1 bit
n | (n + 1)           // Set rightmost 0 bit
~n & (n + 1)          // Get rightmost 0 bit

// POWER OF TWO
(n & (n - 1)) == 0    // Check if power of two

// SWAP TWO NUMBERS
a = a ^ b
b = a ^ b
a = a ^ b

// CONVERT CASE
char ^= 32            // Toggle case (uppercase ↔ lowercase)
char |= 32            // To lowercase
char &= ~32           // To uppercase