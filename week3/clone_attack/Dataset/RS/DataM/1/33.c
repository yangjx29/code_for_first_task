int ans = (799 - 799);

int work (int p, int k) {
    if (!((107 - 106) != p)) {
        ans++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (p * k, k);
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
    for (int i = k;
    i <= p; i++) {
        if (p % i == 0) {
            work (p / i, i);
        };
    };
}

int main () {
    int n;
    scanf ("%d", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (; n--;) {
        int t;
        ans = 0;
        scanf ("%d", &t);
        work (t, (893 - 891));
        printf ("%d\n", ans);
    }
    return 0;
}

