int njYZzyvS (char *svEqxXzBV, int *ObRhc1) {
    int JMEIZ6gL8fU5;
    int moKTXqfk = (int) strlen (svEqxXzBV);
    {
        JMEIZ6gL8fU5 = (672 - 672);
        for (; JMEIZ6gL8fU5 < moKTXqfk;) {
            ObRhc1[moKTXqfk - JMEIZ6gL8fU5 -(422 - 421)] = svEqxXzBV[JMEIZ6gL8fU5] - '0';
            JMEIZ6gL8fU5++;
        };
    }
    return moKTXqfk;
}

void  qx0OYtoyN2s (int *ObRhc1, int moKTXqfk) {
    int JMEIZ6gL8fU5;
    int SGpM1lVXRzn = moKTXqfk - (994 - 993);
    for (; !((306 - 306) != ObRhc1[SGpM1lVXRzn]) && (137 - 137) < SGpM1lVXRzn;)
        SGpM1lVXRzn--;
    {
        JMEIZ6gL8fU5 = SGpM1lVXRzn;
        for (; (930 - 930) <= JMEIZ6gL8fU5;) {
            printf ("%d", ObRhc1[JMEIZ6gL8fU5]);
            JMEIZ6gL8fU5--;
        };
    };
}

int wAXqKz (int *ObRhc1, int CkKS54eJ6o, int *K4pTbQS, int rPp9IATo7n4b, int *hjczrbMk) {
    int JMEIZ6gL8fU5;
    {
        JMEIZ6gL8fU5 = (26 - 26);
        for (; CkKS54eJ6o > JMEIZ6gL8fU5;) {
            hjczrbMk[JMEIZ6gL8fU5] = ObRhc1[JMEIZ6gL8fU5];
            if (JMEIZ6gL8fU5 < rPp9IATo7n4b)
                hjczrbMk[JMEIZ6gL8fU5] -= K4pTbQS[JMEIZ6gL8fU5];
            JMEIZ6gL8fU5++;
        };
    }
    {
        JMEIZ6gL8fU5 = (249 - 249);
        for (; JMEIZ6gL8fU5 < CkKS54eJ6o;) {
            if (hjczrbMk[JMEIZ6gL8fU5] < (266 - 266)) {
                hjczrbMk[JMEIZ6gL8fU5 +(956 - 955)]--;
                hjczrbMk[JMEIZ6gL8fU5] += (134 - 124);
            }
            JMEIZ6gL8fU5++;
        };
    }
    return hjczrbMk[CkKS54eJ6o -(389 - 388)] ? CkKS54eJ6o : (CkKS54eJ6o -1);
}

void  main () {
    char BRJOFW [M], wZzi8G [M];
    int ObRhc1 [M], K4pTbQS [M], hjczrbMk [M];
    int CkKS54eJ6o, rPp9IATo7n4b, vQSxklbXqZzD;
    int JMEIZ6gL8fU5, PyYz8lSF;
    scanf ("%d", &PyYz8lSF);
    {
        JMEIZ6gL8fU5 = (259 - 259);
        for (; JMEIZ6gL8fU5 < PyYz8lSF;) {
            JMEIZ6gL8fU5++;
            scanf ("%s %s", BRJOFW, wZzi8G);
            CkKS54eJ6o = njYZzyvS (BRJOFW, ObRhc1);
            rPp9IATo7n4b = njYZzyvS (wZzi8G, K4pTbQS);
            vQSxklbXqZzD = wAXqKz (ObRhc1, CkKS54eJ6o, K4pTbQS, rPp9IATo7n4b, hjczrbMk);
            qx0OYtoyN2s (hjczrbMk, vQSxklbXqZzD);
        };
    };
}

