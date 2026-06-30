class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        
        int a = 0; // F(0)
        int b = 1; // F(1)
        int c = 0; // Will hold F(n)
        
        for (int i = 2; i <= n; i++) {
            c = a + b; // Current is sum of past two
            a = b;     // Move 'a' forward
            b = c;     // Move 'b' forward
        }
        
        return b;
    }
};