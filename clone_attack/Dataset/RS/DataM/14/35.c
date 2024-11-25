struct   student {
    int LEzUkv3Z4BY;
    int yuwen;
    int EMcxUobtz8YE;
    int anf6mWO4;
    struct   student *Dy62eVcAHKM9;
};
void  main () {
    int GzhExAjvBGp;
    int j;
    int KVuhtfpxw0;
    GzhExAjvBGp = (546 - 546);
    j = (312 - 312);
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
    struct   student *QqIWv7Nr43, *aCvKl8NmJD, *p2, *P;
    aCvKl8NmJD = p2 = QqIWv7Nr43 = (struct   student *) malloc (LEN);
    scanf ("%d\n", &KVuhtfpxw0);
    {
        GzhExAjvBGp = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (KVuhtfpxw0 > GzhExAjvBGp) {
            p2 = aCvKl8NmJD;
            scanf ("%d%d%d", &aCvKl8NmJD->LEzUkv3Z4BY, &aCvKl8NmJD->yuwen, &aCvKl8NmJD->EMcxUobtz8YE);
            aCvKl8NmJD->anf6mWO4 = aCvKl8NmJD->yuwen + aCvKl8NmJD->EMcxUobtz8YE;
            p2->Dy62eVcAHKM9 = aCvKl8NmJD = (struct   student *) malloc (LEN);
            GzhExAjvBGp = GzhExAjvBGp +1;
        };
    }
    p2->Dy62eVcAHKM9 = QqIWv7Nr43;
    aCvKl8NmJD = QqIWv7Nr43;
    for (GzhExAjvBGp = 0;;) {
        if (j == 3)
            break;
        j++;
        QqIWv7Nr43 = aCvKl8NmJD;
        P = aCvKl8NmJD;
        aCvKl8NmJD = QqIWv7Nr43->Dy62eVcAHKM9;
        for (; !(QqIWv7Nr43 == aCvKl8NmJD);) {
            if (P->anf6mWO4 < aCvKl8NmJD->anf6mWO4)
                P = aCvKl8NmJD;
            else {
                if (aCvKl8NmJD->anf6mWO4 == P->anf6mWO4 && aCvKl8NmJD->LEzUkv3Z4BY < P->LEzUkv3Z4BY)
                    P = aCvKl8NmJD;
            }
            aCvKl8NmJD = aCvKl8NmJD->Dy62eVcAHKM9;
        }
        printf ("%d %d\n", P->LEzUkv3Z4BY, P->anf6mWO4);
        while (aCvKl8NmJD->Dy62eVcAHKM9 != P)
            aCvKl8NmJD = aCvKl8NmJD->Dy62eVcAHKM9;
        aCvKl8NmJD->Dy62eVcAHKM9 = P->Dy62eVcAHKM9;
    };
}

