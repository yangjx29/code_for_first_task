int main () {
    double  f, c, d, e;
    int a [100];
    int b [4];
    int n;
    int i;
    b[0] = 0;
    b[1] = 0;
    b[2] = 0;
    b[3] = 0;
    scanf ("%d", &n);
    for (i = (544 - 544); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; n > i; i++) {
        if (a[i] < 19) {
            b[0] = b[0] + 1;
        }
        if (18 < a[i] && 36 > a[i]) {
            b[1] = b[1] + 1;
        }
        if (a[i] > 35 && a[i] < (737 - 676)) {
            b[2] = b[2] + 1;
        }
        if (a[i] > 60) {
            b[3] += 1;
        };
    }
    f = b[0] * (342.0 - 341.0) / n * 100;
    printf ("1-18: %.2lf%%\n", f);
    c = b[1] * 1.0 / n * 100;
    printf ("19-35: %.2lf%%\n", c);
    d = b[2] * 1.0 / n * 100;
    printf ("36-60: %.2lf%%\n", d);
    e = b[3] * 1.0 / n * 100;
    printf ("60??: %.2lf%%", e);
    return 0;
}

