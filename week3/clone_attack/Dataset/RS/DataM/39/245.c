void  main () {
    int tZGam8h3Fpkl;
    int lloSnPgaJiH;
    int towX7mDMW;
    int hGowRHxh;
    int KN3yEa;
    int GLtWPfOsE;
    int k;
    int sum;
    int i;
    int Fl4BzgCLKqZI;
    tZGam8h3Fpkl = (821 - 821);
    lloSnPgaJiH = (104 - 104);
    towX7mDMW = (151 - 151);
    hGowRHxh = (337 - 337);
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
    KN3yEa = (449 - 449);
    GLtWPfOsE = (954 - 954);
    k = (73 - 73);
    sum = (771 - 771);
    struct   student {
        char name [(958 - 938)];
        int meEv6xl;
        int bj;
        char gb;
        char sGRviTpCl3I;
        int lw;
        int money;
    }
    Uk1mHtLO [(233 - 133)] = {(846 - 846)};
    scanf ("%d", &Fl4BzgCLKqZI);
    for (i = (675 - 675); i < Fl4BzgCLKqZI; i++) {
        scanf ("%s %d %d %c %c %d", Uk1mHtLO[i].name, &Uk1mHtLO[i].meEv6xl, &Uk1mHtLO[i].bj, &Uk1mHtLO[i].gb, &Uk1mHtLO[i].sGRviTpCl3I, &Uk1mHtLO[i].lw);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (502 - 502); i < Fl4BzgCLKqZI; i++) {
        if (Uk1mHtLO[i].meEv6xl > (635 - 555) && (938 - 938) < Uk1mHtLO[i].lw)
            tZGam8h3Fpkl = (8573 - 573);
        if ((715 - 630) < Uk1mHtLO[i].meEv6xl && (794 - 714) < Uk1mHtLO[i].bj)
            lloSnPgaJiH = (4434 - 434);
        if (90 < Uk1mHtLO[i].meEv6xl)
            towX7mDMW = (2819 - 819);
        if ((709 - 624) < Uk1mHtLO[i].meEv6xl && Uk1mHtLO[i].sGRviTpCl3I == 'Y')
            hGowRHxh = (1494 - 494);
        if (Uk1mHtLO[i].bj > (1079 - 999) && Uk1mHtLO[i].gb == 'Y')
            KN3yEa = (1299 - 449);
        Uk1mHtLO[i].money = tZGam8h3Fpkl + lloSnPgaJiH + towX7mDMW + hGowRHxh + KN3yEa;
        tZGam8h3Fpkl = lloSnPgaJiH = towX7mDMW = hGowRHxh = KN3yEa = (49 - 49);
    }
    GLtWPfOsE = Uk1mHtLO[(241 - 241)].money;
    {
        i = 524 - 524;
        while (i < Fl4BzgCLKqZI) {
            if (Uk1mHtLO[i].money > GLtWPfOsE) {
                GLtWPfOsE = Uk1mHtLO[i].money;
                k = i;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < Fl4BzgCLKqZI) {
            sum = sum + Uk1mHtLO[i].money;
            i++;
        };
    }
    printf ("%s\n", Uk1mHtLO[k].name);
    printf ("%d\n", Uk1mHtLO[k].money);
    printf ("%d", sum);
}

