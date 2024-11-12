int main () {
    int n, i, t, s, r;
    int a [20000];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (867 - 866) >= i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
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
    printf ("%d", a[0]);
    {
        t = 1;
        while (n - 1 >= t) {
            r = 0;
            for (s = 0; s <= t - 1; s++) {
                if (a[t] == a[s])
                    break;
                else
                    r++;
            }
            if (r == t)
                printf (" %d", a[t]);
            t = t + 1;
        };
    }
    return 0;
}

