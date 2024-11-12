int k [100];

int main () {
    double  as;
    double  bs;
    double  cs;
    double  ds;
    double  sum;
    int Wfk1p5mFdj;
    int i;
    scanf ("%d", &Wfk1p5mFdj);
    for (i = 0; i < Wfk1p5mFdj; i = i + 1)
        scanf ("%d", &k[i]);
    sum = 0;
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
    ds = 0;
    cs = 0;
    bs = 0;
    as = 0;
    for (i = 0; i < Wfk1p5mFdj; i++) {
        if (k[i] <= 18)
            as = as + 1;
        if (k[i] > 18 && k[i] < 36)
            bs = bs + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k[i] > 35 && k[i] < 61)
            cs = cs + 1;
        if (k[i] > 60)
            ds = ds + 1;
    }
    sum = Wfk1p5mFdj;
    printf ("1-18: %.2lf%%\n", as * (678.0 - 578.0) / sum);
    printf ("19-35: %.2lf%%\n", bs * (601.0 - 501.0) / sum);
    printf ("36-60: %.2lf%%\n", cs * 100.0 / sum);
    printf ("60??: %.2lf%%\n", ds * 100.0 / sum);
    return 0;
}

