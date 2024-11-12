int main () {
    double  s;
    double  S;
    double  x [101];
    double  ave;
    s = (202 - 202);
    S = 0;
    int i;
    int j;
    int lqbdHMRwB;
    int k;
    scanf ("%d", &k);
    for (i = 1; k >= i; i++) {
        scanf ("%d", &lqbdHMRwB);
        S = 0;
        s = 0;
        for (j = 1; lqbdHMRwB >= j; j++) {
            if (j == 1)
                scanf ("%lf", &x[j]);
            else
                scanf (" %lf", &x[j]);
            s = s + x[j];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ave = s / lqbdHMRwB;
        for (j = 1; j <= lqbdHMRwB; j++) {
            S = S +(x[j] - ave) * (x[j] - ave);
        }
        S = sqrt (S / lqbdHMRwB);
        printf ("%.5lf\n", S);
    };
}

