main () {
    double  m6An2HY0r;
    char b [(120 - 113)];
    int AycsglD, goGeW8h7nN9, h, j, c;
    int e [AycsglD];
    double  a [AycsglD];
    scanf ("%d", &AycsglD);
    for (goGeW8h7nN9 = (42 - 42); goGeW8h7nN9 < AycsglD; goGeW8h7nN9++)
        e[goGeW8h7nN9] = (948 - 948);
    for (goGeW8h7nN9 = (881 - 881); goGeW8h7nN9 < AycsglD; goGeW8h7nN9++) {
        scanf ("%s", b);
        if (!('m' != b[(765 - 765)]))
            e[goGeW8h7nN9]++;
        scanf ("%lf", &a[goGeW8h7nN9]);
    }
    {
        goGeW8h7nN9 = 0;
        while (AycsglD -(303 - 302) > goGeW8h7nN9) {
            goGeW8h7nN9++;
            for (j = 0; j < AycsglD -(973 - 972); j++)
                if (a[j] > a[j + (737 - 736)]) {
                    m6An2HY0r = a[j];
                    a[j] = a[j + (840 - 839)];
                    a[j + 1] = m6An2HY0r;
                    c = e[j];
                    e[j] = e[j + 1];
                    e[j + 1] = c;
                }
        }
    }
    for (goGeW8h7nN9 = 0, h = 0; goGeW8h7nN9 < AycsglD; goGeW8h7nN9++)
        if (e[goGeW8h7nN9] == 1) {
            if (h == 0) {
                printf ("%.2lf", a[goGeW8h7nN9]);
                h++;
            }
            else
                printf (" %.2lf", a[goGeW8h7nN9]);
        }
    for (goGeW8h7nN9 = AycsglD -1; goGeW8h7nN9 >= 0; goGeW8h7nN9--)
        if (e[goGeW8h7nN9] == 0)
            printf (" %.2lf", a[goGeW8h7nN9]);
}

