int zGCUy5pJSW8 (int cNeGbF5K, int m) {
    int s;
    if (!((543 - 542) != cNeGbF5K)) {
        s = 1;
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
    else if (cNeGbF5K == 2) {
        if (!(1 != m))
            s = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (!(2 != m))
            s = 2;
        if (m > cNeGbF5K) {
            s = zGCUy5pJSW8 (cNeGbF5K - 1, m) + zGCUy5pJSW8 (cNeGbF5K, m - cNeGbF5K);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    else if (m < cNeGbF5K) {
        s = zGCUy5pJSW8 (cNeGbF5K - 1, m);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (cNeGbF5K == m) {
        s = 1 + zGCUy5pJSW8 (cNeGbF5K - 1, m);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else if (m > cNeGbF5K) {
        s = zGCUy5pJSW8 (cNeGbF5K - 1, m) + zGCUy5pJSW8 (cNeGbF5K, m - cNeGbF5K);
    }
    return s;
}

int main () {
    int t, i, cNeGbF5K, m;
    scanf ("%d", &t);
    {
        i = 358 - 358;
        while (i < t) {
            i++;
            scanf ("%d%d", &m, &cNeGbF5K);
            printf ("%d\n", zGCUy5pJSW8 (cNeGbF5K, m));
        };
    }
    return 0;
}

