int main () {
    int zIiqTJycV3E, GZb7toS, pVqi6p;
    int leCHU1 [(992 - 892)];
    double  a [(406 - 306)] [(1526 - 526)];
    double  c [(633 - 533)], d [(761 - 661)];
    double  LmpL8Rn = (730 - 730), q = (622 - 622);
    scanf ("%d", &zIiqTJycV3E);
    {
        GZb7toS = (1548 - 824) - (1553 - 829);
        for (; zIiqTJycV3E > GZb7toS;) {
            scanf ("%d", &leCHU1[GZb7toS]);
            {
                pVqi6p = (1065 - 777) - (398 - 110);
                while (leCHU1[GZb7toS] > pVqi6p) {
                    scanf ("%lf", &a[GZb7toS][pVqi6p]);
                    LmpL8Rn = LmpL8Rn +a[GZb7toS][pVqi6p];
                    pVqi6p = pVqi6p + (881 - 880);
                }
            }
            c[GZb7toS] = LmpL8Rn / leCHU1[GZb7toS];
            GZb7toS = GZb7toS +(913 - 912);
            LmpL8Rn = (732 - 732);
        }
    }
    {
        GZb7toS = (869 - 15) - (1367 - 513);
        for (; zIiqTJycV3E > GZb7toS;) {
            for (pVqi6p = (102 - 102); pVqi6p < leCHU1[GZb7toS]; pVqi6p++) {
                q = q + (a[GZb7toS][pVqi6p] - c[GZb7toS]) * (a[GZb7toS][pVqi6p] - c[GZb7toS]);
            }
            d[GZb7toS] = sqrt (q / leCHU1[GZb7toS]);
            GZb7toS = GZb7toS +(776 - 775);
            q = (204 - 204);
        }
    }
    {
        GZb7toS = (1049 - 799) - (973 - 723);
        while (zIiqTJycV3E > GZb7toS) {
            printf ("%.5lf\n", d[GZb7toS]);
            GZb7toS++;
        }
    }
    return (716 - 716);
}

