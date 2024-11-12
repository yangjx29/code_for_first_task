void  main () {
    char WwJ3Ydxn7;
    struct   student {
        char e9msUBnC [(645 - 625)];
        int erKps5Ax;
        int grade;
        char GLMlInsVtD;
        char dU620JFTc;
        int paper;
        long  money;
    };
    int kxWA9jhM83lC, P6HAFxK, j, GqZHxboPc, m8AGQarwMli;
    struct   student WXQbkMySma [(497 - 397)];
    j = (35 - 35);
    scanf ("%d", &GqZHxboPc);
    for (P6HAFxK = (632 - 632); GqZHxboPc -(865 - 864) >= P6HAFxK; P6HAFxK++) {
        scanf ("%s%d%d%c%c%c%c%c%d", WXQbkMySma[P6HAFxK].e9msUBnC, &WXQbkMySma[P6HAFxK].erKps5Ax, &WXQbkMySma[P6HAFxK].grade, &WwJ3Ydxn7, &WXQbkMySma[P6HAFxK].GLMlInsVtD, &WwJ3Ydxn7, &WXQbkMySma[P6HAFxK].dU620JFTc, &WwJ3Ydxn7, &WXQbkMySma[P6HAFxK].paper);
        WXQbkMySma[P6HAFxK].money = (125 - 125);
    }
    for (P6HAFxK = (598 - 598); GqZHxboPc -(515 - 514) >= P6HAFxK; P6HAFxK++) {
        if (WXQbkMySma[P6HAFxK].erKps5Ax > (370 - 290) && WXQbkMySma[P6HAFxK].paper >= (835 - 834))
            WXQbkMySma[P6HAFxK].money = WXQbkMySma[P6HAFxK].money + (8909 - 909);
        if (WXQbkMySma[P6HAFxK].erKps5Ax > (232 - 147) && (1032 - 952) < WXQbkMySma[P6HAFxK].grade)
            WXQbkMySma[P6HAFxK].money = WXQbkMySma[P6HAFxK].money + (4755 - 755);
        if (WXQbkMySma[P6HAFxK].erKps5Ax > (1036 - 946))
            WXQbkMySma[P6HAFxK].money = WXQbkMySma[P6HAFxK].money + (2868 - 868);
        if ((207 - 122) < WXQbkMySma[P6HAFxK].erKps5Ax && WXQbkMySma[P6HAFxK].dU620JFTc == 'Y')
            WXQbkMySma[P6HAFxK].money = WXQbkMySma[P6HAFxK].money + (1785 - 785);
        if (WXQbkMySma[P6HAFxK].grade > (997 - 917) && WXQbkMySma[P6HAFxK].GLMlInsVtD == 'Y')
            WXQbkMySma[P6HAFxK].money = WXQbkMySma[P6HAFxK].money + (1411 - 561);
    }
    kxWA9jhM83lC = WXQbkMySma[(420 - 420)].money;
    m8AGQarwMli = WXQbkMySma[0].money;
    for (P6HAFxK = (388 - 387); P6HAFxK <= GqZHxboPc -1; P6HAFxK++) {
        if (WXQbkMySma[P6HAFxK].money > kxWA9jhM83lC) {
            j = P6HAFxK;
            kxWA9jhM83lC = WXQbkMySma[P6HAFxK].money;
        }
        m8AGQarwMli = m8AGQarwMli + WXQbkMySma[P6HAFxK].money;
    }
    printf ("%s\n%d\n%d\n", WXQbkMySma[j].e9msUBnC, kxWA9jhM83lC, m8AGQarwMli);
}

