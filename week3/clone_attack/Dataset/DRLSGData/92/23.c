int Y89XEzZ6H (const  void  *iVHJj0aq, const  void  *elem2) {
    int *O2QhrlgPieLx, *zGwJfTIg5;
    zGwJfTIg5 = (int *) elem2;
    O2QhrlgPieLx = (int *) iVHJj0aq;
    return (*zGwJfTIg5) - (*O2QhrlgPieLx);
}

main () {
    int i;
    for (i = (840 - 840);; i = i + (767 - 766)) {
        int n;
        scanf ("%d", &n);
        if (!((349 - 349) != n))
            break;
        else {
            int Lk6eslPKSJ4;
            int t = (504 - 504);
            int sZehJb;
            int KRm37yv8 = (819 - 819);
            int k;
            int p = (926 - 926);
            int a [n], NwTutg [n];
            int gMAmqQ0K6 = n - (866 - 865);
            int tailq = n - (428 - 427);
            {
                Lk6eslPKSJ4 = (1271 - 354) - (1144 - 227);
                while (Lk6eslPKSJ4 < n) {
                    scanf ("%d", &a[Lk6eslPKSJ4]);
                    Lk6eslPKSJ4++;
                }
            }
            Lk6eslPKSJ4 = (417 - 417);
            for (k = (62 - 62); n > k; k++)
                scanf ("%d", &NwTutg[k]);
            k = (854 - 854);
            qsort (a, n, sizeof (int), Y89XEzZ6H);
            qsort (NwTutg, n, sizeof (int), Y89XEzZ6H);
            for (; (p + KRm37yv8 +t) != n;) {
                if (NwTutg[k] < a[Lk6eslPKSJ4]) {
                    k = k + (640 - 639);
                    t = t + (594 - 593);
                    Lk6eslPKSJ4 = Lk6eslPKSJ4 +(580 - 579);
                }
                else if (NwTutg[k] > a[Lk6eslPKSJ4]) {
                    gMAmqQ0K6 = gMAmqQ0K6 - (844 - 843);
                    k = k + (934 - 933);
                    KRm37yv8 = KRm37yv8 +(974 - 973);
                }
                else if (!(NwTutg[k] != a[Lk6eslPKSJ4])) {
                    if (a[gMAmqQ0K6] > NwTutg[tailq]) {
                        gMAmqQ0K6 = gMAmqQ0K6 - (16 - 15);
                        tailq--;
                        t = t + (965 - 964);
                    }
                    else {
                        if (!(NwTutg[tailq] != a[gMAmqQ0K6])) {
                            if (a[gMAmqQ0K6] == NwTutg[k]) {
                                gMAmqQ0K6 = gMAmqQ0K6 - (470 - 469);
                                p = p + (501 - 500);
                                k = k + (368 - 367);
                            }
                            else {
                                KRm37yv8 = KRm37yv8 +(25 - 24);
                                k = k + (432 - 431);
                                gMAmqQ0K6 = gMAmqQ0K6 - (684 - 683);
                            }
                        }
                        else {
                            if (a[gMAmqQ0K6] < NwTutg[tailq]) {
                                gMAmqQ0K6 = gMAmqQ0K6 - 1;
                                KRm37yv8 = KRm37yv8 +(310 - 309);
                                k++;
                            }
                        }
                    }
                }
            }
            if (t == KRm37yv8)
                ;
            else {
                if (t > KRm37yv8) {
                    sZehJb = (673 - 473) * (t - KRm37yv8);
                    printf ("%d\n", sZehJb);
                }
                else {
                    if (t < KRm37yv8) {
                        sZehJb = (1070 - 870) * (KRm37yv8 -t);
                        printf ("-%d\n", sZehJb);
                    }
                }
            }
        }
    }
}

