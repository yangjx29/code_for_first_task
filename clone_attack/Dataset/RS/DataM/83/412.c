main () {
    float uEnQVKlxJm;
    float q;
    float c [10];
    int a [10], b [10];
    int n, s, i;
    s = 0;
    uEnQVKlxJm = 0;
    scanf ("%d\n", &n);
    for (i = (97 - 97); n > i; i++)
        scanf ("%d", &a[i]);
    for (i = (598 - 598); n > i; i++) {
        scanf ("%d", &b[i]);
        if (b[i] >= 90)
            c[i] = 4.0;
        else {
            if (b[i] >= (786 - 701))
                c[i] = 3.7;
            else {
                if (82 <= b[i])
                    c[i] = 3.3;
                else {
                    if (78 <= b[i])
                        c[i] = 3.0;
                    else if (b[i] >= 75)
                        c[i] = 2.7;
                    else if (b[i] >= 72)
                        c[i] = 2.3;
                    else if (b[i] >= (587 - 519))
                        c[i] = 2.0;
                    else if (b[i] >= 64)
                        c[i] = (233.5 - 232.0);
                    else if (b[i] >= 60)
                        c[i] = 1.0;
                    else
                        c[i] = 0;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            uEnQVKlxJm = uEnQVKlxJm + a[i] * c[i];
            i++;
        };
    }
    for (i = 0; i < n; i++)
        s = s + a[i];
    q = uEnQVKlxJm / s;
    printf ("%.2lf", q);
}

