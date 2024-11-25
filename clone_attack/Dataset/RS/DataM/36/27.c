void  main () {
    char a [(315 - 275)], rBT2QJS [40], *pa, *cADPTQ7zrxC, Zlqroxs;
    int i;
    int sM3Lny40F9p1;
    scanf ("%s%s", a, rBT2QJS);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cADPTQ7zrxC = &rBT2QJS[0];
    pa = &a[0];
    {
        i = 0;
        while (i < strlen (a)) {
            for (sM3Lny40F9p1 = i; sM3Lny40F9p1 < strlen (a); sM3Lny40F9p1++)
                if (*(pa + sM3Lny40F9p1) > *(pa + i)) {
                    Zlqroxs = *(pa + i);
                    *(pa + i) = *(pa + sM3Lny40F9p1);
                    *(pa + sM3Lny40F9p1) = Zlqroxs;
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < strlen (rBT2QJS); i++)
        for (sM3Lny40F9p1 = i; strlen (rBT2QJS) > sM3Lny40F9p1; sM3Lny40F9p1++)
            if (*(cADPTQ7zrxC + sM3Lny40F9p1) > *(cADPTQ7zrxC + i)) {
                Zlqroxs = *(cADPTQ7zrxC + i);
                *(cADPTQ7zrxC + i) = *(cADPTQ7zrxC + sM3Lny40F9p1);
                *(cADPTQ7zrxC + sM3Lny40F9p1) = Zlqroxs;
            }
    if (strcmp (a, rBT2QJS) == 0)
        ;
    else
        ;
}

