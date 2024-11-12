int Compare1 (const  void  *elem1, const  void  *elem2) {
    int *lrPeDC;
    int *p2;
    lrPeDC = (int *) elem1;
    p2 = (int *) elem2;
    return (*lrPeDC) - (*p2);
}

int Compare2 (const  void  *elem1, const  void  *elem2) {
    int *lrPeDC, *p2;
    lrPeDC = (int *) elem1;
    p2 = (int *) elem2;
    return (*p2) - (*lrPeDC);
}

main () {
    int n;
    int rtifPcob, iYTuaE, ZDsQKFEY8apg;
    float m [n], f [n];
    iYTuaE = ZDsQKFEY8apg = 0;
    scanf ("%d", &n);
    {
        rtifPcob = 0;
        while (n > rtifPcob) {
            char sex [7];
            rtifPcob = rtifPcob + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            scanf ("%s", sex);
            if (sex[0] == 'm') {
                scanf ("%f", &m[iYTuaE]);
                iYTuaE = iYTuaE + 1;
            }
            if (sex[0] == 'f') {
                scanf ("%f", &f[ZDsQKFEY8apg]);
                ZDsQKFEY8apg = ZDsQKFEY8apg +1;
            };
        };
    }
    qsort (m, iYTuaE, sizeof (float), Compare1);
    qsort (f, ZDsQKFEY8apg, sizeof (float), Compare2);
    {
        rtifPcob = 0;
        while (rtifPcob < iYTuaE) {
            printf ("%.2f ", m[rtifPcob]);
            rtifPcob++;
        };
    }
    for (rtifPcob = 0; rtifPcob < ZDsQKFEY8apg; rtifPcob = rtifPcob + 1) {
        if (rtifPcob == ZDsQKFEY8apg -1)
            printf ("%.2f", f[rtifPcob]);
        else
            printf ("%.2f ", f[rtifPcob]);
    };
}

