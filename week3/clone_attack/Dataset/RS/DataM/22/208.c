void  main () {
    char OGn74EmKfs;
    int mIXvn251P;
    int F71wIHVYdsm;
    int AfNczRl;
    int j;
    int AnJ4xeUigbt;
    int AKwPbnZ0kLld [(1199 - 899)];
    mIXvn251P = (209 - 208);
    {
        F71wIHVYdsm = 708 - 708;
        while ((565 - 265) > F71wIHVYdsm) {
            scanf ("%d%c", &AKwPbnZ0kLld[F71wIHVYdsm], &OGn74EmKfs);
            if (OGn74EmKfs != ',')
                break;
            F71wIHVYdsm++;
        };
    }
    {
        AfNczRl = 671 - 670;
        while (AfNczRl < 300) {
            AKwPbnZ0kLld[AfNczRl] = (935 - 935);
            AfNczRl++;
        };
    }
    {
        AfNczRl = 796 - 796;
        while (F71wIHVYdsm > AfNczRl) {
            for (j = (10 - 10); j < F71wIHVYdsm -AfNczRl; j++)
                if (AKwPbnZ0kLld[j] > AKwPbnZ0kLld[j + (408 - 407)]) {
                    AnJ4xeUigbt = AKwPbnZ0kLld[j];
                    AKwPbnZ0kLld[j] = AKwPbnZ0kLld[j + (997 - 996)];
                    AKwPbnZ0kLld[j + 1] = AnJ4xeUigbt;
                }
            AfNczRl++;
        };
    }
    for (j = F71wIHVYdsm; j > 0; j--)
        if (AKwPbnZ0kLld[j - 1] < AKwPbnZ0kLld[j]) {
            mIXvn251P = 0;
            printf ("%d", AKwPbnZ0kLld[j - 1]);
            break;
        }
    if (mIXvn251P)
        printf ("No");
}

