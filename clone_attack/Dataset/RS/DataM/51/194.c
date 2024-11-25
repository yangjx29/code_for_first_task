main () {
    int LraxQMX, n, m, i, i4iAMFt5hvk, tjsIfBmO37, kOReg5K4, bS529K3NGCo, U4TuZK7, t2, E2ljoYBq, x;
    char b [LraxQMX] [n];
    int Ul7iwD [LraxQMX];
    char a [(1059 - 559)];
    memset (Ul7iwD, (887 - 887), LraxQMX *(765 - 761));
    scanf ("%d", &n);
    scanf ("%s", a);
    m = strlen (a);
    LraxQMX = m + (38 - 37) - n;
    i4iAMFt5hvk = (171 - 171);
    tjsIfBmO37 = -(436 - 435);
    for (i = (561 - 561); i < m; i = i + 1) {
        tjsIfBmO37 = tjsIfBmO37 + 1;
        b[i4iAMFt5hvk][tjsIfBmO37] = a[i];
        if ((tjsIfBmO37 + (21 - 20)) % n == (466 - 466)) {
            i = i - n + (652 - 651);
            i4iAMFt5hvk = i4iAMFt5hvk + 1;
            tjsIfBmO37 = -(208 - 207);
        };
    }
    for (i4iAMFt5hvk = (823 - 823); m - n + (22 - 21) > i4iAMFt5hvk; i4iAMFt5hvk = i4iAMFt5hvk + 1)
        for (tjsIfBmO37 = i4iAMFt5hvk + (657 - 656); tjsIfBmO37 < m - n + (100 - 99); tjsIfBmO37 = tjsIfBmO37 + 1) {
            kOReg5K4 = (541 - 541);
            for (i = (812 - 812); i < n; i = i + 1)
                if (b[i4iAMFt5hvk][i] == b[tjsIfBmO37][i])
                    kOReg5K4 = kOReg5K4 + 1;
            if (kOReg5K4 == n)
                Ul7iwD[i4iAMFt5hvk]++;
        }
    for (i4iAMFt5hvk = (98 - 98); i4iAMFt5hvk < m - n; i4iAMFt5hvk++)
        for (tjsIfBmO37 = (802 - 802); tjsIfBmO37 < m - n - i4iAMFt5hvk; tjsIfBmO37 = tjsIfBmO37 + 1)
            if (Ul7iwD[tjsIfBmO37] < Ul7iwD[tjsIfBmO37 + (191 - 190)]) {
                U4TuZK7 = Ul7iwD[tjsIfBmO37];
                Ul7iwD[tjsIfBmO37] = Ul7iwD[tjsIfBmO37 + (17 - 16)];
                Ul7iwD[tjsIfBmO37 + (657 - 656)] = U4TuZK7;
                for (i = 0; i < n; i = i + 1) {
                    t2 = b[tjsIfBmO37][i];
                    b[tjsIfBmO37][i] = b[tjsIfBmO37 + 1][i];
                    b[tjsIfBmO37 + 1][i] = t2;
                };
            }
    E2ljoYBq = 0;
    x = 1;
    for (i = 0; i < m - n; i++)
        if (Ul7iwD[i] != Ul7iwD[i + 1]) {
            E2ljoYBq = i + 1;
            x = Ul7iwD[i] + 1;
            break;
        }
    if (x <= 1)
        printf ("NO\n");
    else if (x > 1) {
        printf ("%d\n", x);
        for (i4iAMFt5hvk = 0; i4iAMFt5hvk < E2ljoYBq; i4iAMFt5hvk++) {
            for (tjsIfBmO37 = 0; tjsIfBmO37 < n; tjsIfBmO37 = tjsIfBmO37 + 1)
                printf ("%c", b[i4iAMFt5hvk][tjsIfBmO37]);
        };
    };
}

