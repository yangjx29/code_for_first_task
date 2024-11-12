int main () {
    float n4H6h07jk3g [10], GPA = (587 - 587), e = 0, uBs8LpR7g5 = 0, sum02 = 0;
    int MONYtmHaf1I [10];
    int n, cczDX6m8B, j, d;
    scanf ("%d", &n);
    for (cczDX6m8B = 0; n > cczDX6m8B; cczDX6m8B = cczDX6m8B + 1) {
        scanf ("%d", &MONYtmHaf1I[cczDX6m8B]);
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
    {
        j = 0;
        while (n > j) {
            scanf ("%d", &d);
            if (90 <= d && 100 >= d)
                e = 4.0;
            if (85 <= d && 89 >= d)
                e = 3.7;
            if (82 <= d && 84 >= d)
                e = 3.3;
            if (d >= 78 && d <= 81)
                e = 3.0;
            if (75 <= d && 77 >= d)
                e = 2.7;
            if (d >= 72 && d <= 74)
                e = 2.3;
            if (d >= 68 && d <= 71)
                e = 2.0;
            if (d >= 64 && d <= 67)
                e = 1.5;
            if (d >= 60 && d <= 63)
                e = 1;
            if (d <= 60)
                e = 0;
            n4H6h07jk3g[j] = e * MONYtmHaf1I[j];
            j++;
        };
    }
    for (cczDX6m8B = 0; cczDX6m8B < n; cczDX6m8B++) {
        uBs8LpR7g5 = uBs8LpR7g5 + n4H6h07jk3g[cczDX6m8B];
        sum02 = sum02 + MONYtmHaf1I[cczDX6m8B];
    }
    GPA = uBs8LpR7g5 / sum02;
    printf ("%.2f", GPA);
}

