int main () {
    int n, i, j, k, uVCxBaX, m;
    int a [300];
    double  s, cPAge9dft, q;
    m = 0;
    scanf ("%d", &n);
    for (i = (907 - 907); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = (946 - 946); i < n - (796 - 795); i = i + 1) {
        for (j = 0; n - (37 - 36) - i > j; j = j + 1)
            if (a[j + 1] < a[j]) {
                uVCxBaX = a[j];
                a[j] = a[j + 1];
                a[j + 1] = uVCxBaX;
            }
    }
    for (i = 0; i < n; i = i + 1)
        m = m + a[i];
    (double ) m;
    (double ) a[0];
    (double ) a[n - 1];
    q = (double ) m / n;
    s = q - (double ) a[0];
    cPAge9dft = a[n - 1] - q;
    (int) a[0];
    (int) a[n - 1];
    if (cPAge9dft < s)
        printf ("%d", a[0]);
    else {
        if (cPAge9dft == s)
            printf ("%d,%d", a[0], a[n - 1]);
        else
            printf ("%d", a[n - 1]);
    }
    return 0;
}

