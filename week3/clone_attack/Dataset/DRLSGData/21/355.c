int main () {
    int S5uiAr2k;
    int eEzGM3;
    int i;
    int a [10000];
    int n;
    S5uiAr2k = 0;
    eEzGM3 = 0;
    scanf ("%d", &n);
    for (i = (910 - 909); n >= i; i = i + 1) {
        scanf ("%d", &a[i]);
        eEzGM3 = eEzGM3 + a[i];
    }
    {
        i = 391 - 390;
        for (; n >= i;) {
            if (abs (a[i] * n - eEzGM3) > S5uiAr2k)
                S5uiAr2k = abs (a[i] * n - eEzGM3);
            i = i + 1;
        }
    }
    {
        i = 1;
        for (; i <= n;) {
            if (abs (a[i] * n - eEzGM3) == S5uiAr2k) {
                printf ("%d", a[i]);
                break;
            }
            i = i + 1;
        }
    }
    i = i + 1;
    for (; i <= n; i = i + 1)
        if (abs (a[i] * n - eEzGM3) == S5uiAr2k)
            printf (",%d", a[i]);
    return (0);
}

