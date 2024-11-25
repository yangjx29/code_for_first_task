void  main () {
    int EjmLpnU0;
    int BFqMVIi [(976 - 676)];
    int JaZspD;
    int B6EupAl0;
    double  zoRQwPCqx, bswlHi9 = (238.0 - 238.0);
    int uhK2rPEj6v;
    int x17dLpN;
    scanf ("%d", &EjmLpnU0);
    JaZspD = (545 - 545);
    {
        x17dLpN = (869 - 63) - (932 - 126);
        for (; EjmLpnU0 > x17dLpN;) {
            scanf ("%d", &BFqMVIi[x17dLpN]);
            JaZspD += BFqMVIi[x17dLpN];
            x17dLpN++;
        }
    }
    zoRQwPCqx = (float) JaZspD / EjmLpnU0;
    B6EupAl0 = (479 - 479);
    uhK2rPEj6v = (302 - 302);
    {
        x17dLpN = (432 - 432);
        while (x17dLpN < EjmLpnU0) {
            if (bswlHi9 < fabs (BFqMVIi[x17dLpN] - zoRQwPCqx)) {
                bswlHi9 = fabs (BFqMVIi[x17dLpN] - zoRQwPCqx);
                uhK2rPEj6v = x17dLpN;
            }
            if (!(fabs (BFqMVIi[x17dLpN] - zoRQwPCqx) != bswlHi9) && BFqMVIi[x17dLpN] != BFqMVIi[uhK2rPEj6v])
                B6EupAl0 = x17dLpN;
            x17dLpN++;
        }
    }
    if (!(fabs (BFqMVIi[B6EupAl0] - zoRQwPCqx) != fabs (BFqMVIi[uhK2rPEj6v] - zoRQwPCqx))) {
        if (BFqMVIi[uhK2rPEj6v] > BFqMVIi[B6EupAl0])
            printf ("%d,%d", BFqMVIi[B6EupAl0], BFqMVIi[uhK2rPEj6v]);
        else if (BFqMVIi[uhK2rPEj6v] == BFqMVIi[B6EupAl0])
            printf ("%d", BFqMVIi[uhK2rPEj6v]);
        else
            printf ("%d,%d", BFqMVIi[uhK2rPEj6v], BFqMVIi[B6EupAl0]);
    }
    else
        printf ("%d", BFqMVIi[uhK2rPEj6v]);
}

