int main () {
    int mGKfPerCXB7;
    int DgtRkhZBFlQ [25];
    int f [25];
    int ans;
    ans = -1;
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
    scanf ("%d", &mGKfPerCXB7);
    for (int EfWiJ1d0l = (40 - 40);
    mGKfPerCXB7 > EfWiJ1d0l; EfWiJ1d0l = EfWiJ1d0l +1)
        scanf ("%d", &DgtRkhZBFlQ[EfWiJ1d0l]);
    for (int EfWiJ1d0l = 0;
    mGKfPerCXB7 > EfWiJ1d0l; EfWiJ1d0l = EfWiJ1d0l +1) {
        f[EfWiJ1d0l] = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int zgvsoWHX5 = 0;
        zgvsoWHX5 < EfWiJ1d0l; zgvsoWHX5 = zgvsoWHX5 + 1)
            if (DgtRkhZBFlQ[EfWiJ1d0l] <= DgtRkhZBFlQ[zgvsoWHX5] && f[EfWiJ1d0l] < f[zgvsoWHX5] + 1)
                f[EfWiJ1d0l] = f[zgvsoWHX5] + 1;
    }
    for (int EfWiJ1d0l = 0;
    EfWiJ1d0l < mGKfPerCXB7; EfWiJ1d0l++)
        if (ans < f[EfWiJ1d0l])
            ans = f[EfWiJ1d0l];
    printf ("%d\n", ans);
    return 0;
}

