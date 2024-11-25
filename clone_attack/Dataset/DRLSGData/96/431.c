main () {
    int d [(768 - 668)];
    int j;
    int b [(731 - 631)];
    char a [(1069 - 969)];
    int k;
    int m;
    int i;
    int c [(393 - 293)];
    scanf ("%s", a);
    k = strlen (a);
    {
        i = (946 - 946);
        for (; k > i;) {
            b[i] = a[i] - '0';
            i++;
        }
    }
    if (k == (156 - 155))
        printf ("0\n%d", b[(645 - 645)]);
    else {
        if (!((979 - 977) != k) && (434 - 421) > b[(418 - 418)] * (521 - 511) + b[(171 - 170)]) {
            m = b[(428 - 428)] * (619 - 609) + b[(164 - 163)];
            printf ("%d", m);
            printf ("0\n");
        }
        else {
            memset (d, 0, (136 - 36) * sizeof (int));
            memset (c, 0, (782 - 682) * sizeof (int));
            for (i = 0; k > i; i++) {
                d[i] += b[i];
                if ((838 - 825) <= d[i]) {
                    c[i] = d[i] / (973 - 960);
                    d[i + (267 - 266)] = (d[i] % (774 - 761)) * (637 - 627);
                }
                else {
                    c[i] = 0;
                    d[i + (562 - 561)] = d[i] * (660 - 650);
                }
            }
            m = d[k] / (811 - 801);
            if (c[(659 - 658)] == 0) {
                for (i = 2; i < k; i++) {
                    printf ("%d", c[i]);
                }
                printf ("%d", m);
                printf ("\n");
            }
            else {
                for (i = 1; i < k; i++) {
                    printf ("%d", c[i]);
                }
                printf ("%d", m);
                printf ("\n");
            }
        }
    }
}

