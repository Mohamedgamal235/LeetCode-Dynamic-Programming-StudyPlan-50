class Solution {
    public:
        #define ll long long
        const int N = 50 ;
        ll mem[50] ;
        ll dp(int n) {
            if (n == 0)
                return 0 ;
            if (n == 1 || n == 2)
                return n ;
    
            if (mem[n] != -1)
                return mem[n] ;
    
            return mem[n] = dp(n-1) + dp(n - 2) ;
        }
    
        int climbStairs(int n) {
            memset(mem , -1 , sizeof mem);
            return dp(n) ;
        }
    };
