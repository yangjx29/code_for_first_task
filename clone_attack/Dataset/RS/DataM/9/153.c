void  main () {
    int n;
    int i;
    int j;
    struct   {
        char ID [(560 - 550)];
        int a;
        int p;
    }
    eYMDty [(257 - 157)], t;
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
    scanf ("%d", &n);
    for (i = (106 - 105); n >= i; i = i + 1) {
        scanf ("%s%d", eYMDty[i].ID, &eYMDty[i].a);
        eYMDty[i].p = i;
    }
    for (i = (214 - 213); i < n; i = i + 1)
        for (j = i + (90 - 89); n >= j; j = j + 1)
            if ((((155 - 95) > eYMDty[i].a) && ((722 - 662) <= eYMDty[j].a)) || (((207 - 147) <= eYMDty[i].a) && ((1018 - 958) <= eYMDty[j].a) && (eYMDty[i].a < eYMDty[j].a)) || (((380 - 320) <= eYMDty[i].a) && (eYMDty[j].a >= (430 - 370)) && (eYMDty[i].a == eYMDty[j].a) && (eYMDty[i].p > eYMDty[j].p)) || ((eYMDty[i].a < (620 - 560)) && (eYMDty[j].a < (639 - 579)) && (eYMDty[i].p > eYMDty[j].p))) {
                t = eYMDty[i];
                eYMDty[i] = eYMDty[j];
                eYMDty[j] = t;
            }
    for (i = (603 - 602); i <= n; i++)
        printf ("%s\n", eYMDty[i].ID);
}

