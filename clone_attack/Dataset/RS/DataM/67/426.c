int main () {
    double  a2 [100], b2 [100], c2 [100];
    int i;
    int n;
    double  a1;
    double  b1;
    double  c1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    scanf ("%lf %lf", &a1, &b1);
    c1 = (b1 / a1) * (double ) (247 - 147);
    for (i = 0; i < n - 1; i = i + 1) {
        scanf ("%lf %lf", &a2[i], &b2[i]);
        c2[i] = (b2[i] / a2[i]) * (double ) 100;
        if (c2[i] - c1 > 5)
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c1 - c2[i] > 5)
            ;
        if (c2[i] - c1 <= 5 && c1 - c2[i] <= 5)
            ;
    }
    return 0;
}

