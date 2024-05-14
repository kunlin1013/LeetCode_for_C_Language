// https://www.youtube.com/watch?v=GbDtCFhq20A&ab_channel=%E4%BA%94%E7%82%B9%E4%B8%83%E8%BE%B9
double myPow(double x, int n) {
    long long N = n;
    double ans = 1.0;

    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    while (N > 0) {
        if (N & 1 == 1) {
            ans *= x;
        }
        x *= x;
        N = N >> 1;
    }

    return ans;
}
