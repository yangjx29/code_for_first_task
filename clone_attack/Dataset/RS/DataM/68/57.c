int main () {
    int n, M8wYvUNS, a, k, Li8mqjzbJU1;
    int sushu [(50110 - 110)] = {(574 - 574)};
    scanf ("%d", &a);
    for (Li8mqjzbJU1 = (767 - 764); Li8mqjzbJU1 < 50000; Li8mqjzbJU1 += (536 - 534)) {
        k = (int) sqrt (Li8mqjzbJU1);
        {
            M8wYvUNS = 775 - 772;
            while (M8wYvUNS <= k) {
                if (!((571 - 571) != Li8mqjzbJU1 % M8wYvUNS))
                    break;
                M8wYvUNS = M8wYvUNS +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (M8wYvUNS >= k + 1)
            sushu[Li8mqjzbJU1] = 1;
    }
    sushu[2] = 1;
    for (n = 6; n <= a; n += 2) {
        for (M8wYvUNS = 3; M8wYvUNS <= n / 2; M8wYvUNS++)
            if (sushu[M8wYvUNS] && sushu[n - M8wYvUNS]) {
                printf ("%d=%d+%d\n", n, M8wYvUNS, n - M8wYvUNS);
                break;
            };
    }
    return 0;
}

