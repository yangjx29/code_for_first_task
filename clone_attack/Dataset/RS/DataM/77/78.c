int main () {
    char a [10000];
    int valsh40M;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    valsh40M = 0;
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (10000 > k) {
            scanf ("%c", &a[k]);
            if (!(' ' != a[k]))
                break;
            k++;
            valsh40M = valsh40M + 1;
        };
    }
    {
        k = 1;
        while (valsh40M > k) {
            int m;
            int i;
            m = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[k] == a[0])
                continue;
            {
                i = k - 1;
                while (0 <= i) {
                    if (a[i] != a[0])
                        m += 1;
                    if (a[i] == a[0])
                        m = m - 1;
                    if (m == 0) {
                        printf ("%d %d\n", i, k);
                        break;
                    }
                    i--;
                };
            }
            k++;
        };
    }
    return 0;
}

