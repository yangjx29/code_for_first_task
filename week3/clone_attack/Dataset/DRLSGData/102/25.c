void  main () {
    int IfUltJz3AYBx;
    float JcafBJAV3 [(422 - 382)];
    float izuifFV4qJ [(614 - 574)];
    float XEaH1nQJd [40];
    int Xhr9ypYl;
    int b57whWKtz;
    int QbU6Yz0foOS;
    float vbk3x1QvGzK;
    char lDb7fe1X [(983 - 976)];
    int KmQhH9vBA4S;
    int uMktuJB7LpWH;
    int rE2ohjA;
    scanf ("%d", &QbU6Yz0foOS);
    Xhr9ypYl = (416 - 416);
    b57whWKtz = (406 - 406);
    KmQhH9vBA4S = (339 - 339);
    {
        uMktuJB7LpWH = 62 - 62;
        for (; uMktuJB7LpWH < QbU6Yz0foOS;) {
            scanf ("%s", lDb7fe1X);
            scanf ("%f", &JcafBJAV3[uMktuJB7LpWH]);
            if (!('m' != lDb7fe1X[(693 - 693)])) {
                izuifFV4qJ[KmQhH9vBA4S] = JcafBJAV3[uMktuJB7LpWH];
                KmQhH9vBA4S++;
            }
            if (!('f' != lDb7fe1X[(758 - 758)])) {
                XEaH1nQJd[Xhr9ypYl] = JcafBJAV3[uMktuJB7LpWH];
                Xhr9ypYl++;
            }
            uMktuJB7LpWH = uMktuJB7LpWH + 1;
        }
    }
    {
        uMktuJB7LpWH = 0;
        for (; uMktuJB7LpWH < KmQhH9vBA4S -(332 - 331);) {
            b57whWKtz = uMktuJB7LpWH;
            vbk3x1QvGzK = izuifFV4qJ[uMktuJB7LpWH];
            {
                rE2ohjA = 300 - 299;
                for (; rE2ohjA < KmQhH9vBA4S;) {
                    if (vbk3x1QvGzK > izuifFV4qJ[rE2ohjA]) {
                        vbk3x1QvGzK = izuifFV4qJ[rE2ohjA];
                        b57whWKtz = rE2ohjA;
                    }
                    rE2ohjA++;
                }
            }
            izuifFV4qJ[b57whWKtz] = izuifFV4qJ[uMktuJB7LpWH];
            izuifFV4qJ[uMktuJB7LpWH] = vbk3x1QvGzK;
            uMktuJB7LpWH = uMktuJB7LpWH + 1;
        }
    }
    b57whWKtz = 0;
    for (uMktuJB7LpWH = 0; Xhr9ypYl -(243 - 242) > uMktuJB7LpWH; uMktuJB7LpWH++) {
        b57whWKtz = uMktuJB7LpWH;
        vbk3x1QvGzK = XEaH1nQJd[uMktuJB7LpWH];
        for (rE2ohjA = uMktuJB7LpWH + 1; rE2ohjA < Xhr9ypYl; rE2ohjA++) {
            if (XEaH1nQJd[rE2ohjA] < vbk3x1QvGzK) {
                vbk3x1QvGzK = XEaH1nQJd[rE2ohjA];
                b57whWKtz = rE2ohjA;
            }
        }
        XEaH1nQJd[b57whWKtz] = XEaH1nQJd[uMktuJB7LpWH];
        XEaH1nQJd[uMktuJB7LpWH] = vbk3x1QvGzK;
    }
    for (uMktuJB7LpWH = 0; KmQhH9vBA4S > uMktuJB7LpWH; uMktuJB7LpWH++) {
        printf ("%1.2f ", izuifFV4qJ[uMktuJB7LpWH]);
    }
    for (uMktuJB7LpWH = Xhr9ypYl -1; uMktuJB7LpWH > 0; uMktuJB7LpWH--) {
        printf ("%1.2f ", XEaH1nQJd[uMktuJB7LpWH]);
    }
    printf ("%1.2f", XEaH1nQJd[0]);
}

