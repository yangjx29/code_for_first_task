struct   l {
    char s [10];
    float h;
}
a [40];

main () {
    float b [40], c [40], tmp = 0;
    int i = 0, j = 0, ghrk56B0 = 0, w = 0, n;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &n);
    for (i = 0; n - 1 >= i; i = i + 1)
        scanf ("%s%f", a[i].s, &a[i].h);
    {
        i = 0;
        while (i <= n - 1) {
            if (strcmp (a[i].s, "male") == 0) {
                b[j] = a[i].h;
                j = j + 1;
            }
            if (strcmp (a[i].s, "female") == 0) {
                c[ghrk56B0] = a[i].h;
                ghrk56B0 = ghrk56B0 + 1;
            }
            i = i + 1;
        };
    }
    for (w = j - 1; w > 0; w = w - 1) {
        for (i = 0; i <= j - 2; i = i + 1) {
            if (b[i] > b[i + 1]) {
                tmp = b[i + 1];
                b[i + 1] = b[i];
                b[i] = tmp;
            };
        };
    }
    for (w = ghrk56B0 - 1; w > 0; w = w - 1) {
        for (i = 0; i <= ghrk56B0 - 2; i = i + 1) {
            if (c[i] < c[i + 1]) {
                tmp = c[i + 1];
                c[i + 1] = c[i];
                c[i] = tmp;
            };
        };
    }
    {
        i = 0;
        while (i <= j - 1) {
            printf ("%.2f ", b[i]);
            i = i + 1;
        };
    }
    for (i = 0; i <= ghrk56B0 - 2; i = i + 1)
        printf ("%.2f ", c[i]);
    printf ("%.2f", c[i]);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

