main () {
    int pBMLlxkP, jmDu24pQi1;
    struct   abc {
        int r4YGrV [1000];
        char Zx9Hswr5y [1000];
    };
    struct   abc NBK8NM, X7DHFRM8Q5K;
    int gPhxFycia;
    int oSLqRkF9fa;
    scanf ("%s %s", NBK8NM.Zx9Hswr5y, X7DHFRM8Q5K.Zx9Hswr5y);
    gPhxFycia = strlen (NBK8NM.Zx9Hswr5y);
    oSLqRkF9fa = strlen (X7DHFRM8Q5K.Zx9Hswr5y);
    if (gPhxFycia != oSLqRkF9fa)
        ;
    else {
        for (pBMLlxkP = 0; pBMLlxkP < gPhxFycia; pBMLlxkP = pBMLlxkP + 1)
            X7DHFRM8Q5K.r4YGrV[pBMLlxkP] = 0;
        for (pBMLlxkP = 0; pBMLlxkP < gPhxFycia; pBMLlxkP = pBMLlxkP + 1)
            for (jmDu24pQi1 = 0; jmDu24pQi1 < gPhxFycia; jmDu24pQi1 = jmDu24pQi1 + 1)
                if (X7DHFRM8Q5K.r4YGrV[jmDu24pQi1] == 0 && X7DHFRM8Q5K.Zx9Hswr5y[jmDu24pQi1] == NBK8NM.Zx9Hswr5y[pBMLlxkP]) {
                    X7DHFRM8Q5K.r4YGrV[jmDu24pQi1] = 1;
                    break;
                }
        {
            pBMLlxkP = 0;
            while (pBMLlxkP < gPhxFycia) {
                if (X7DHFRM8Q5K.r4YGrV[pBMLlxkP] == 0)
                    break;
                pBMLlxkP = pBMLlxkP + 1;
            };
        }
        if (pBMLlxkP == gPhxFycia)
            printf ("YES");
        else
            ;
    };
}

