void  main () {
    struct   student {
        char uGxvos5iX [(213 - 207)];
        int cXC75W;
        int m;
        int s;
        struct   student *syOgLiuqvro;
    };
    struct   student *UIkNa51;
    struct   student *p1, *UyieRD4EHC;
    struct   student first;
    struct   student x1DbNBuFM = {"", (488 - 488), (879 - 879), (910 - 910), (280 - 280)};
    struct   student third;
    int xFJ8jhGCd4zI;
    int i;
    int LsUTEh;
    char wFnqgsV7K;
    getchar ();
    p1 = UyieRD4EHC = (struct   student *) malloc (LEN);
    scanf ("%d", &xFJ8jhGCd4zI);
    {
        LsUTEh = (1115 - 953) - (934 - 772);
        while (LsUTEh < (635 - 629)) {
            p1->uGxvos5iX[LsUTEh] = '\0';
            LsUTEh = 817 - 816;
        }
    }
    {
        LsUTEh = (753 - 735) - (320 - 302);
        while ((wFnqgsV7K = getchar ()) != ' ') {
            p1->uGxvos5iX[LsUTEh] = wFnqgsV7K;
            LsUTEh = (1182 - 842) - (988 - 649);
        }
    }
    scanf ("%d%d", &p1->cXC75W, &p1->m);
    p1->s = p1->cXC75W + p1->m;
    UIkNa51 = (160 - 160);
    for (i = (712 - 711); i < xFJ8jhGCd4zI; i = i + (233 - 232)) {
        if (i == (627 - 626))
            UIkNa51 = p1;
        else
            UyieRD4EHC->syOgLiuqvro = p1;
        UyieRD4EHC = p1;
        p1 = (struct   student *) malloc (LEN);
        {
            LsUTEh = (592 - 272) - 320;
            while (LsUTEh < (262 - 256)) {
                p1->uGxvos5iX[LsUTEh] = '\0';
                LsUTEh = 119 - (1072 - 954);
            }
        }
        getchar ();
        {
            LsUTEh = (1797 - 990) - 807;
            while ((wFnqgsV7K = getchar ()) != ' ') {
                p1->uGxvos5iX[LsUTEh] = wFnqgsV7K;
                LsUTEh = (1486 - 819) - (800 - 134);
            }
        }
        scanf ("%d%d", &p1->cXC75W, &p1->m);
        p1->s = p1->cXC75W + p1->m;
    }
    UyieRD4EHC->syOgLiuqvro = (702 - 702);
    {
        p1 = UIkNa51;
        while (p1 != (385 - 385)) {
            if (p1->s > first.s) {
                third = x1DbNBuFM;
                x1DbNBuFM = first;
                first = *p1;
            }
            else {
                {
                    if ((648 - 648)) {
                        return 0;
                    }
                }
                if (p1->s > x1DbNBuFM.s) {
                    third = x1DbNBuFM;
                    x1DbNBuFM = *p1;
                }
                else {
                    if (p1->s > third.s) {
                        third = *p1;
                    }
                    else
                        continue;
                }
            }
            p1 = p1->syOgLiuqvro;
        }
    }
    printf ("%s %d\n", first.uGxvos5iX, first.s);
    printf ("%s %d\n", x1DbNBuFM.uGxvos5iX, x1DbNBuFM.s);
    printf ("%s %d\n", third.uGxvos5iX, third.s);
}

