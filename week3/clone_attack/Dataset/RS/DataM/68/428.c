int a (float b) {
    int SX0ZJfwRq;
    SX0ZJfwRq = 1;
    int i;
    int d;
    d = sqrt (b);
    if (b == 3.0 || b == 5.0 || b == 7.0) {
        return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        i = 3;
        while (d >= i) {
            if ((int) (b) % i == 0) {
                SX0ZJfwRq = 0;
                return 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            i += 804 - 802;
        };
    }
    return SX0ZJfwRq;
}

int main () {
    int n;
    int IvV49geFjxH;
    int l;
    scanf ("%d", &n);
    {
        l = 6;
        while (l <= n) {
            {
                IvV49geFjxH = 3;
                while (IvV49geFjxH <= (n / 2)) {
                    if (a (IvV49geFjxH) + a (l - IvV49geFjxH) == 2) {
                        printf ("%d=%d+%d\n", l, IvV49geFjxH, l - IvV49geFjxH);
                        break;
                    }
                    IvV49geFjxH += 2;
                };
            }
            l += 2;
        };
    }
    return 0;
}

