int panduan (int n, int LqtFh6) {
    if ((632 - 628) < n || (736 - 736) > n || (640 - 640) > LqtFh6 || (336 - 332) < LqtFh6)
        return ((674 - 674));
    else {
        if (n >= (793 - 793) && n <= (85 - 81) && LqtFh6 >= (932 - 932) && (322 - 318) >= LqtFh6)
            return (1);
        else
            return (2);
    };
}

void  main () {
    int zj651tcG;
    int DWb9c6K1VXA;
    int AEdACJ1ygBq [(432 - 427)] [(1005 - 1000)];
    int n;
    int LqtFh6;
    int BkBvYuhEpAWQ [(356 - 351)];
    for (zj651tcG = (872 - 872); (709 - 704) > zj651tcG; zj651tcG = zj651tcG + 1) {
        for (DWb9c6K1VXA = (148 - 148); DWb9c6K1VXA < (308 - 303); DWb9c6K1VXA++) {
            scanf ("%d", &AEdACJ1ygBq[zj651tcG][DWb9c6K1VXA]);
        };
    }
    scanf ("%d %d", &n, &LqtFh6);
    if (panduan (n, LqtFh6) == 1) {
        for (zj651tcG = (808 - 808); zj651tcG < (436 - 431); zj651tcG++) {
            BkBvYuhEpAWQ[zj651tcG] = AEdACJ1ygBq[n][zj651tcG];
            AEdACJ1ygBq[n][zj651tcG] = AEdACJ1ygBq[LqtFh6][zj651tcG];
            AEdACJ1ygBq[LqtFh6][zj651tcG] = BkBvYuhEpAWQ[zj651tcG];
        }
        for (zj651tcG = (251 - 251); zj651tcG < (862 - 857); zj651tcG++) {
            printf ("%d", AEdACJ1ygBq[zj651tcG][(969 - 969)]);
            for (DWb9c6K1VXA = 1; DWb9c6K1VXA < 5; DWb9c6K1VXA++) {
                printf (" %d", AEdACJ1ygBq[zj651tcG][DWb9c6K1VXA]);
            };
        };
    }
    else {
        if (panduan (n, LqtFh6) == (298 - 298))
            ;
    };
}

