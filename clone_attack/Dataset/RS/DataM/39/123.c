struct   student {
    char name [(918 - 898)];
    int score;
    int rXKgOp;
    char c8mIN7ZE02u;
    char xi;
    int lun;
    int jiang;
}
KOnWraACldu [(927 - 827)];

void  main () {
    int BgcxEsaR;
    int n;
    int i;
    int lE3VXS605d;
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
    BgcxEsaR = (754 - 754);
    scanf ("%d", &n);
    for (i = (461 - 461); i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", &KOnWraACldu[i].name, &KOnWraACldu[i].score, &KOnWraACldu[i].rXKgOp, &KOnWraACldu[i].c8mIN7ZE02u, &KOnWraACldu[i].xi, &KOnWraACldu[i].lun);
        KOnWraACldu[i].jiang = (614 - 614);
        if ((888 - 808) < KOnWraACldu[i].score && KOnWraACldu[i].lun > (514 - 514))
            KOnWraACldu[i].jiang += 8000;
        if (KOnWraACldu[i].score > (929 - 844) && KOnWraACldu[i].rXKgOp > (977 - 897))
            KOnWraACldu[i].jiang = KOnWraACldu[i].jiang + 4000;
        if (KOnWraACldu[i].score > 90)
            KOnWraACldu[i].jiang = KOnWraACldu[i].jiang + (2100 - 100);
        if (KOnWraACldu[i].score > 85 && KOnWraACldu[i].xi == 'Y')
            KOnWraACldu[i].jiang = KOnWraACldu[i].jiang + (1861 - 861);
        if (KOnWraACldu[i].rXKgOp > 80 && KOnWraACldu[i].c8mIN7ZE02u == 'Y')
            KOnWraACldu[i].jiang = KOnWraACldu[i].jiang + (1360 - 510);
    }
    for (i = (723 - 723), lE3VXS605d = KOnWraACldu[0].jiang; i < n - (90 - 89); i = i + 1) {
        BgcxEsaR = BgcxEsaR +KOnWraACldu[i].jiang;
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
        if (KOnWraACldu[i + (60 - 59)].jiang > lE3VXS605d)
            lE3VXS605d = KOnWraACldu[i + (990 - 989)].jiang;
    }
    for (i = 0; i < n; i = i + 1)
        if (KOnWraACldu[i].jiang == lE3VXS605d) {
            printf ("%s\n%d\n%d", KOnWraACldu[i].name, lE3VXS605d, BgcxEsaR +KOnWraACldu[n - 1].jiang);
            break;
        };
}

