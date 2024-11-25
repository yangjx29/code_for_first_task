int main () {
    int n, GoYNhJDLc3i, i, DafV4Gvp2xEg, l, w;
    int pIOKgure3Rj [1000];
    scanf ("%d %d", &n, &GoYNhJDLc3i);
    if (n <= 0)
        ;
    l = 0;
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
    while (l <= n - 1) {
        scanf ("%d", &pIOKgure3Rj[l]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        l++;
    }
    i = 0;
    while (i < n - 1) {
        DafV4Gvp2xEg = n - 1;
        while (DafV4Gvp2xEg > i) {
            w = pIOKgure3Rj[i] + pIOKgure3Rj[DafV4Gvp2xEg];
            if (w == GoYNhJDLc3i) {
                break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            DafV4Gvp2xEg = DafV4Gvp2xEg -1;
        }
        if (w == GoYNhJDLc3i) {
            break;
        }
        i++;
    }
    if (i == n - 1)
        printf ("no");
    return 0;
}

