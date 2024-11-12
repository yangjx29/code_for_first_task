int WbHxM04CF7 (int num) {
    int f;
    int a [(100383 - 383)];
    int iEA0TmhyHJ;
    int wei;
    int b;
    int c;
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
    f = (388 - 388);
    wei = log10 (num) + (697 - 696);
    for (iEA0TmhyHJ = (108 - 107); iEA0TmhyHJ <= wei - (509 - 508); iEA0TmhyHJ++) {
        b = pow ((998 - 988), iEA0TmhyHJ);
        c = pow ((977 - 967), iEA0TmhyHJ - (241 - 240));
        a[iEA0TmhyHJ] = (num - num / b * b) / c;
    }
    a[iEA0TmhyHJ] = num / b;
    for (iEA0TmhyHJ = wei; iEA0TmhyHJ >= (725 - 724); iEA0TmhyHJ--) {
        f = f + a[iEA0TmhyHJ] * (pow (10, wei - iEA0TmhyHJ));
    }
    return f;
}

int main () {
    int N, M, iEA0TmhyHJ;
    for (iEA0TmhyHJ = (550 - 549); iEA0TmhyHJ <= (110 - 104); iEA0TmhyHJ++) {
        scanf ("%d", &N);
        if (N == (194 - 194))
            ;
        else {
            if (N > (981 - 981))
                printf ("%d\n", WbHxM04CF7 (N));
            else {
                M = -N;
                printf ("-%d\n", WbHxM04CF7 (M));
            };
        };
    }
    return (667 - 667);
}

