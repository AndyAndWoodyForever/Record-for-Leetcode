int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    int prev_prev = 1;  // f(n-2)
    int prev = 2;       // f(n-1)
    int current = 0;    // f(n)
    for (int i = 3; i <= n; i++) {
        current = prev + prev_prev;  // f(i) = f(i-1) + f(i-2)
        prev_prev = prev;
        prev = current;
    }
    return current;
}
//递归算法超时