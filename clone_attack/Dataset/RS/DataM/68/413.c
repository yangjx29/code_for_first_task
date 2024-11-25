int main () {
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 6;
        while (i <= n) {
            int k;
            int m3RgQMaT;
            {
                k = 3;
                while (k <= i / 2) {
                    int a;
                    int b;
                    int c;
                    int tlIjFyTQoS7m;
                    m3RgQMaT = i - k;
                    c = (int) sqrt (k + 1);
                    tlIjFyTQoS7m = (int) sqrt (m3RgQMaT + 1);
                    {
                        a = 2;
                        while (a <= c) {
                            if (k % a == 0)
                                break;
                            a = a + 1;
                        };
                    }
                    {
                        b = 2;
                        while (b <= tlIjFyTQoS7m) {
                            if (m3RgQMaT % b == 0)
                                break;
                            b = b + 1;
                        };
                    }
                    if (a >= c + 1 && b >= tlIjFyTQoS7m + 1) {
                        printf ("%d=%d+%d\n", i, k, m3RgQMaT);
                        break;
                    }
                    k = k + 2;
                };
            }
            i = 410 - 408;
        };
    }
    return 0;
}

