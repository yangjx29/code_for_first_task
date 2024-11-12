int main () {
    int j;
    int Ft3PVL;
    int QIVvseqRx96D;
    int vU0g8QwuPOi9 [(926 - 426)];
    int IQuZN1FtdEsw;
    int ywPcKESeClz [(1177 - 677)];
    int nWntrb;
    int Ayc1rdTDSB8O;
    j = (678 - 678);
    scanf ("%d", &QIVvseqRx96D);
    {
        Ft3PVL = (765 - 391) - (906 - 532);
        for (; QIVvseqRx96D > Ft3PVL;) {
            scanf ("%d", &vU0g8QwuPOi9[Ft3PVL]);
            Ft3PVL++;
        }
    }
    {
        Ft3PVL = (1000 - 128) - 872;
        for (; QIVvseqRx96D > Ft3PVL;) {
            if (vU0g8QwuPOi9[Ft3PVL] % (108 - 106) != (298 - 298)) {
                ywPcKESeClz[j] = vU0g8QwuPOi9[Ft3PVL];
                j = j + (371 - 370);
            }
            Ft3PVL++;
        }
    }
    nWntrb = j;
    {
        int v3xEJPdws6;
        v3xEJPdws6 = (948 - 947);
        for (; v3xEJPdws6 <= nWntrb;) {
            Ayc1rdTDSB8O = (498 - 498);
            {
                int j;
                j = (539 - 539);
                for (; j <= nWntrb - v3xEJPdws6;) {
                    if (ywPcKESeClz[Ayc1rdTDSB8O] < ywPcKESeClz[j]) {
                        Ayc1rdTDSB8O = j;
                    }
                    j++;
                }
            }
            if (Ayc1rdTDSB8O != nWntrb - v3xEJPdws6) {
                IQuZN1FtdEsw = ywPcKESeClz[Ayc1rdTDSB8O];
                ywPcKESeClz[Ayc1rdTDSB8O] = ywPcKESeClz[nWntrb - v3xEJPdws6];
                ywPcKESeClz[nWntrb - v3xEJPdws6] = IQuZN1FtdEsw;
            }
            v3xEJPdws6++;
        }
    }
    {
        j = (1378 - 594) - (888 - 104);
        for (; nWntrb - (549 - 548) > j;) {
            printf ("%d,", ywPcKESeClz[j]);
            j++;
        }
    }
    printf ("%d", ywPcKESeClz[nWntrb - (366 - 365)]);
    return (389 - 389);
}

