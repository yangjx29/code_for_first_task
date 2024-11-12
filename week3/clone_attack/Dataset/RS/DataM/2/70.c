struct   book {
    int num;
    char *o4wpFnuO;
    struct   book *next;
}
main () {
    int CFOU9f;
    int maxl;
    CFOU9f = 0;
    int *hu0zAf;
    int bF8UElpYQ, xAvbUwo8Zai;
    struct   book *oMXoStlgjTin;
    struct   book *CGM41d6kjRK;
    struct   book *tNPza5;
    int EtLuEw5rQT;
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
    int cMbSmUE;
    oMXoStlgjTin = len;
    scanf ("%d", &bF8UElpYQ);
    tNPza5 = oMXoStlgjTin;
    {
        xAvbUwo8Zai = 352 - 352;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bF8UElpYQ > xAvbUwo8Zai) {
            oMXoStlgjTin->o4wpFnuO = (char *) malloc (26 * (729 - 728));
            scanf ("%d %s", &oMXoStlgjTin->num, oMXoStlgjTin->o4wpFnuO);
            CGM41d6kjRK = len;
            oMXoStlgjTin->next = CGM41d6kjRK;
            oMXoStlgjTin = CGM41d6kjRK;
            xAvbUwo8Zai = xAvbUwo8Zai + 1;
        };
    }
    oMXoStlgjTin = CGM41d6kjRK = tNPza5;
    hu0zAf = (int *) malloc (26 * (760 - 756));
    for (xAvbUwo8Zai = 0; 26 > xAvbUwo8Zai; xAvbUwo8Zai = xAvbUwo8Zai + 1)
        *(hu0zAf + xAvbUwo8Zai) = 0;
    {
        xAvbUwo8Zai = 0;
        while (bF8UElpYQ > xAvbUwo8Zai) {
            EtLuEw5rQT = 0;
            while (*(oMXoStlgjTin->o4wpFnuO + EtLuEw5rQT) != '\0') {
                cMbSmUE = *(oMXoStlgjTin->o4wpFnuO + EtLuEw5rQT) - 'A';
                EtLuEw5rQT = EtLuEw5rQT +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                *(hu0zAf + cMbSmUE) += 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            oMXoStlgjTin = oMXoStlgjTin->next;
            xAvbUwo8Zai = xAvbUwo8Zai + 1;
        };
    }
    oMXoStlgjTin = CGM41d6kjRK = tNPza5;
    {
        xAvbUwo8Zai = 0;
        while (xAvbUwo8Zai < 26) {
            if (*(hu0zAf + xAvbUwo8Zai) > CFOU9f) {
                CFOU9f = *(hu0zAf + xAvbUwo8Zai);
                maxl = 'A' + xAvbUwo8Zai;
            }
            xAvbUwo8Zai = xAvbUwo8Zai + 1;
        };
    }
    printf ("%c\n%d\n", maxl, CFOU9f);
    {
        xAvbUwo8Zai = 0;
        while (xAvbUwo8Zai < bF8UElpYQ) {
            EtLuEw5rQT = 0;
            while (*(oMXoStlgjTin->o4wpFnuO + EtLuEw5rQT) != '\0') {
                if (*(oMXoStlgjTin->o4wpFnuO + EtLuEw5rQT) == maxl) {
                    printf ("%d\n", oMXoStlgjTin->num);
                    break;
                }
                EtLuEw5rQT += 1;
            }
            xAvbUwo8Zai = xAvbUwo8Zai + 1;
            oMXoStlgjTin = oMXoStlgjTin->next;
        };
    };
}

