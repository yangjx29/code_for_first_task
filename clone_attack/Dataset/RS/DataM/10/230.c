int main () {
    int s [(370 - 344)], d [26];
    int T0DIVv5Oo, hEzUBWmkn, k;
    int n;
    scanf ("%d", &n);
    {
        T0DIVv5Oo = 52 - 52;
        while (T0DIVv5Oo < n) {
            scanf ("%d", s + T0DIVv5Oo);
            d[T0DIVv5Oo] = (845 - 845);
            T0DIVv5Oo = T0DIVv5Oo +1;
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
    for (T0DIVv5Oo = n - (534 - 533); T0DIVv5Oo > -1; T0DIVv5Oo = T0DIVv5Oo -1) {
        k = (736 - 736);
        for (hEzUBWmkn = T0DIVv5Oo +1; hEzUBWmkn < n; hEzUBWmkn = hEzUBWmkn + 1) {
            if (k < d[hEzUBWmkn] && s[T0DIVv5Oo] >= s[hEzUBWmkn])
                k = d[hEzUBWmkn];
        }
        k = k + 1;
        d[T0DIVv5Oo] = k;
    }
    k = 0;
    for (T0DIVv5Oo = 0; T0DIVv5Oo < n; T0DIVv5Oo = T0DIVv5Oo +1) {
        if (d[T0DIVv5Oo] > k)
            k = d[T0DIVv5Oo];
    }
    printf ("%d", k);
    return 0;
}

