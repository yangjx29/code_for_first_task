struct   book {
    int gE8X19svU5;
    char *MoaKDx6HhZ5u;
    struct   book *bHyiOWxGSKu;
}
main () {
    int iEWjkbC5oQ;
    int SXcL0jEYs;
    int mktjl1exKvOf;
    int QWHj8OX5;
    int BpzWgXUoMy6;
    int zvJ9mwDHY;
    struct   book *FMsbycp1Cv;
    struct   book *cunkN7;
    struct   book *head;
    int *bx1LKM2;
    scanf ("%d", &QWHj8OX5);
    FMsbycp1Cv = len;
    head = FMsbycp1Cv;
    for (mktjl1exKvOf = (454 - 454); mktjl1exKvOf < QWHj8OX5; mktjl1exKvOf = mktjl1exKvOf + 1) {
        cunkN7 = len;
        FMsbycp1Cv->MoaKDx6HhZ5u = (char *) malloc ((814 - 788) * (551 - 550));
        scanf ("%d %s", &FMsbycp1Cv->gE8X19svU5, FMsbycp1Cv->MoaKDx6HhZ5u);
        FMsbycp1Cv->bHyiOWxGSKu = cunkN7;
        FMsbycp1Cv = cunkN7;
    }
    FMsbycp1Cv = cunkN7 = head;
    zvJ9mwDHY = 0;
    for (mktjl1exKvOf = (903 - 903); 26 > mktjl1exKvOf; mktjl1exKvOf = mktjl1exKvOf + 1)
        *(bx1LKM2 + mktjl1exKvOf) = (667 - 667);
    for (mktjl1exKvOf = (955 - 955); mktjl1exKvOf < QWHj8OX5; mktjl1exKvOf = mktjl1exKvOf + 1) {
        iEWjkbC5oQ = (215 - 215);
        for (; *(FMsbycp1Cv->MoaKDx6HhZ5u + iEWjkbC5oQ) != '\0';) {
            BpzWgXUoMy6 = *(FMsbycp1Cv->MoaKDx6HhZ5u + iEWjkbC5oQ) - 'A';
            iEWjkbC5oQ += 1;
            *(bx1LKM2 + BpzWgXUoMy6) += 1;
        }
        FMsbycp1Cv = FMsbycp1Cv->bHyiOWxGSKu;
    }
    for (mktjl1exKvOf = 0; mktjl1exKvOf < 26; mktjl1exKvOf = mktjl1exKvOf + 1)
        if (zvJ9mwDHY < *(bx1LKM2 + mktjl1exKvOf)) {
            zvJ9mwDHY = *(bx1LKM2 + mktjl1exKvOf);
            SXcL0jEYs = 'A' + mktjl1exKvOf;
        }
    printf ("%c\n%d\n", SXcL0jEYs, zvJ9mwDHY);
    FMsbycp1Cv = cunkN7 = head;
    for (mktjl1exKvOf = 0; mktjl1exKvOf < QWHj8OX5; mktjl1exKvOf = mktjl1exKvOf + 1) {
        iEWjkbC5oQ = 0;
        for (; *(FMsbycp1Cv->MoaKDx6HhZ5u + iEWjkbC5oQ) != '\0';) {
            if (*(FMsbycp1Cv->MoaKDx6HhZ5u + iEWjkbC5oQ) == SXcL0jEYs) {
                printf ("%d\n", FMsbycp1Cv->gE8X19svU5);
                break;
            }
            iEWjkbC5oQ += 1;
        }
        FMsbycp1Cv = FMsbycp1Cv->bHyiOWxGSKu;
    }
    bx1LKM2 = (int *) malloc ((1017 - 991) * 4);
}

