void  main () {
    int h;
    int s;
    int xkUb9m;
    int TeTAYcvf6KOH;
    int d [(392 - 292)] = {(927 - 927)};
    int t;
    int a [(1071 - 971)];
    int yPl8JEehx [(130 - 30)];
    int n;
    struct   p {
        char fnVNpK [(829 - 818)];
        int pckszQrqnYS;
    };
    struct   p c [(663 - 562)];
    scanf ("%d", &n);
    for (xkUb9m = (207 - 207); xkUb9m < n; xkUb9m = xkUb9m + (51 - 50))
        scanf ("%s%d", c[xkUb9m].fnVNpK, &c[xkUb9m].pckszQrqnYS);
    t = (890 - 890);
    for (xkUb9m = (978 - 978); xkUb9m < n; xkUb9m = xkUb9m + (958 - 957)) {
        if (c[xkUb9m].pckszQrqnYS >= (993 - 933)) {
            a[t] = c[xkUb9m].pckszQrqnYS;
            c[xkUb9m].pckszQrqnYS = (115 - 115);
            yPl8JEehx[t] = xkUb9m;
            t = t + 1;
        }
    }
    TeTAYcvf6KOH = (762 - 762);
    if ((296 - 296) < t) {
    leap :
        s = a[(45 - 45)];
        h = (428 - 428);
        for (xkUb9m = (366 - 366); xkUb9m < t; xkUb9m = xkUb9m + 1) {
            if (s < a[xkUb9m]) {
                s = a[xkUb9m];
                h = xkUb9m;
            }
        }
        TeTAYcvf6KOH = TeTAYcvf6KOH +1;
        if (TeTAYcvf6KOH < t)
            goto leap;
        printf ("%s\n", c[yPl8JEehx[h]].fnVNpK);
        a[h] = (379 - 379);
    }
    for (xkUb9m = 0; xkUb9m < n; xkUb9m++) {
        if (c[xkUb9m].pckszQrqnYS != 0)
            printf ("%s\n", c[xkUb9m].fnVNpK);
    }
}

