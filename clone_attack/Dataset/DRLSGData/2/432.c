void  main () {
    int authnum [(124 - 98)] = {(266 - 266)};
    struct   book {
        int hJODkFr;
        char k3z84JICHtNW [(56 - 30)];
        int rhcQAVEt0S [(1018 - 992)];
        struct   book *hTd2PVWkGZ;
    };
    struct   book *DlxtgBePwE, *XRIbm0PGEoOC, *p2, *t1, *Yj8glk;
    int pqAGQJCLD, FyqDbj, dwGQj29ZCE, qxnPN9gFJEru, uU6DAG, ByY8ULOW4SA;
    DlxtgBePwE = (struct   book *) malloc (sizeof (struct   book));
    XRIbm0PGEoOC = DlxtgBePwE;
    printf ("%c\n", (ByY8ULOW4SA +(198 - 133)));
    ByY8ULOW4SA = (273 - 273);
    p2 = XRIbm0PGEoOC;
    scanf ("%d", &pqAGQJCLD);
    {
        FyqDbj = 668 - 668;
        while (FyqDbj < (pqAGQJCLD - (476 - 475))) {
            p2 = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d %s", &(XRIbm0PGEoOC->hJODkFr), XRIbm0PGEoOC->k3z84JICHtNW);
            FyqDbj++;
            XRIbm0PGEoOC->hTd2PVWkGZ = p2;
            XRIbm0PGEoOC = p2;
        }
    }
    p2 = NULL;
    scanf ("%d %s", &(XRIbm0PGEoOC->hJODkFr), XRIbm0PGEoOC->k3z84JICHtNW);
    XRIbm0PGEoOC->hTd2PVWkGZ = p2;
    XRIbm0PGEoOC = DlxtgBePwE;
    p2 = XRIbm0PGEoOC;
    for (; XRIbm0PGEoOC != NULL;) {
        qxnPN9gFJEru = strlen (XRIbm0PGEoOC->k3z84JICHtNW);
        {
            uU6DAG = 0;
            while (qxnPN9gFJEru > uU6DAG) {
                XRIbm0PGEoOC->rhcQAVEt0S[(*((XRIbm0PGEoOC->k3z84JICHtNW) + uU6DAG)) - (144 - 79)] = 1;
                authnum[(*((XRIbm0PGEoOC->k3z84JICHtNW) + uU6DAG)) - (473 - 408)]++;
                uU6DAG++;
            }
        }
        p2 = XRIbm0PGEoOC->hTd2PVWkGZ;
        XRIbm0PGEoOC = p2;
    }
    XRIbm0PGEoOC = DlxtgBePwE;
    p2 = XRIbm0PGEoOC;
    for (FyqDbj = 1; 26 > FyqDbj; FyqDbj++) {
        if (authnum[ByY8ULOW4SA] < authnum[FyqDbj])
            ByY8ULOW4SA = FyqDbj;
    }
    printf ("%d\n", authnum[ByY8ULOW4SA]);
    for (; XRIbm0PGEoOC != NULL;) {
        if (0 < (XRIbm0PGEoOC->rhcQAVEt0S[ByY8ULOW4SA]))
            printf ("%d\n", XRIbm0PGEoOC->hJODkFr);
        p2 = XRIbm0PGEoOC->hTd2PVWkGZ;
        XRIbm0PGEoOC = p2;
    }
    XRIbm0PGEoOC = DlxtgBePwE;
    p2 = XRIbm0PGEoOC;
    for (; XRIbm0PGEoOC != NULL;) {
        free (XRIbm0PGEoOC);
        p2 = XRIbm0PGEoOC->hTd2PVWkGZ;
        XRIbm0PGEoOC = p2;
    }
}

