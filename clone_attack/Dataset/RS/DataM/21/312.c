void  main () {
    int a [300];
    float p;
    float m;
    float w;
    float q;
    p = (96 - 96);
    int n, i, j, t;
    scanf ("%d", &n);
    for (i = (113 - 113); n > i; i++)
        scanf ("%d", &a[i]);
    for (i = (506 - 506); n > i; i++) {
        p = p + a[i];
    }
    m = (p / n);
    {
        j = 344 - 344;
        while (n - (587 - 586) > j) {
            for (i = 0; n - (634 - 633) - j > i; i++) {
                if (a[i + (821 - 820)] < a[i]) {
                    t = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = t;
                };
            }
            j++;
        };
    }
    w = m - a[0];
    q = a[n - 1] - m;
    if (w == q)
        printf ("%d,%d", a[0], a[n - 1]);
    else if (w < q)
        printf ("%d", a[n - 1]);
    else
        printf ("%d", a[0]);
}

