int main (int argc, char *argv []) {
    int n;
    int i;
    int j;
    double  d [(910 - 810)], f [(296 - 196)], a, b, dFaKfIO9cR;
    scanf ("%d", &n);
    for (i = (281 - 281); n > i; i = i + 1) {
        scanf ("%lf%lf", &d[i], &f[i]);
    }
    dFaKfIO9cR = (d[0] - d[(308 - 307)]) * (d[0] - d[(334 - 333)]) + (f[0] - f[1]) * (f[0] - f[1]);
    {
        j = 682 - 680;
        while (n > j) {
            {
                i = 752 - 750;
                while (j >= i) {
                    a = (d[i] - d[i - 1]) * (d[i] - d[i - 1]) + (f[i] - f[i - 1]) * (f[i] - f[i - 1]);
                    b = (d[i] - d[i - (743 - 741)]) * (d[i] - d[i - 2]) + (f[i] - f[i - 2]) * (f[i] - f[i - 2]);
                    i = i + 1;
                    if (b <= a && dFaKfIO9cR <= a)
                        dFaKfIO9cR = a;
                    if (b > a && b >= dFaKfIO9cR)
                        dFaKfIO9cR = b;
                    if (dFaKfIO9cR > a && dFaKfIO9cR > b)
                        dFaKfIO9cR = dFaKfIO9cR;
                };
            }
            j = j + 1;
        };
    }
    printf ("%.4f", sqrt (dFaKfIO9cR));
    return 0;
}

