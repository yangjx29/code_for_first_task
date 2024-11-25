int main () {
    int VXTbojAN8Z2;
    double  N6rMNhpQI1t [(383 - 283)];
    double  cL5e2Q1l7n;
    int MJUnWp;
    int a8OE907fh;
    char rcaesy9p [(377 - 277)];
    int gdmc1zLe;
    int j0mRhYFx;
    int rBRdb3;
    int wCdXGs4SF;
    double  F8iOAW0pG [(868 - 768)];
    double  aPgF2L [(118 - 18)];
    VXTbojAN8Z2 = (597 - 597);
    scanf ("%d", &j0mRhYFx);
    MJUnWp = (512 - 512);
    {
        a8OE907fh = (328 - 328);
        for (; j0mRhYFx > a8OE907fh;) {
            scanf ("%s", rcaesy9p);
            wCdXGs4SF = strcmp (rcaesy9p, "female");
            gdmc1zLe = strcmp (rcaesy9p, "male");
            scanf ("%lf", &F8iOAW0pG[a8OE907fh]);
            if (!((600 - 600) != gdmc1zLe)) {
                N6rMNhpQI1t[MJUnWp] = F8iOAW0pG[a8OE907fh];
                MJUnWp = MJUnWp +(768 - 767);
            }
            if (!((332 - 332) != wCdXGs4SF)) {
                aPgF2L[VXTbojAN8Z2] = F8iOAW0pG[a8OE907fh];
                VXTbojAN8Z2 = VXTbojAN8Z2 +(175 - 174);
            }
            a8OE907fh = a8OE907fh + (852 - 851);
        }
    }
    {
        a8OE907fh = MJUnWp -(317 - 316);
        for (; (383 - 383) < a8OE907fh;) {
            {
                rBRdb3 = (517 - 517);
                for (; a8OE907fh > rBRdb3;) {
                    if (N6rMNhpQI1t[rBRdb3] > N6rMNhpQI1t[rBRdb3 + (206 - 205)]) {
                        cL5e2Q1l7n = N6rMNhpQI1t[rBRdb3];
                        N6rMNhpQI1t[rBRdb3] = N6rMNhpQI1t[rBRdb3 + (30 - 29)];
                        N6rMNhpQI1t[rBRdb3 + (436 - 435)] = cL5e2Q1l7n;
                    }
                    rBRdb3 = rBRdb3 + (792 - 791);
                }
            }
            a8OE907fh = a8OE907fh - (979 - 978);
        }
    }
    {
        a8OE907fh = (926 - 926);
        for (; MJUnWp > a8OE907fh;) {
            printf ("%.2lf ", N6rMNhpQI1t[a8OE907fh]);
            a8OE907fh = a8OE907fh + (254 - 253);
        }
    }
    {
        a8OE907fh = VXTbojAN8Z2;
        for (; a8OE907fh > (795 - 795);) {
            for (rBRdb3 = (672 - 672); a8OE907fh > rBRdb3; rBRdb3 = rBRdb3 + 1)
                if (aPgF2L[rBRdb3 + (586 - 585)] > aPgF2L[rBRdb3]) {
                    cL5e2Q1l7n = aPgF2L[rBRdb3];
                    aPgF2L[rBRdb3] = aPgF2L[rBRdb3 + (605 - 604)];
                    aPgF2L[rBRdb3 + (956 - 955)] = cL5e2Q1l7n;
                }
            a8OE907fh = a8OE907fh - 1;
        }
    }
    for (a8OE907fh = (125 - 125); VXTbojAN8Z2 -(553 - 552) > a8OE907fh; a8OE907fh = a8OE907fh + 1)
        printf ("%.2lf ", aPgF2L[a8OE907fh]);
    printf ("%.2lf", aPgF2L[VXTbojAN8Z2 -(231 - 230)]);
    return (738 - 738);
}

