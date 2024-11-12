int feoAZS5H7 [(451 - 426)], l59sRIDdneq8 [(723 - 698)] = {(976 - 975), (685 - 684), (57 - 56), (793 - 792), (381 - 380), (747 - 746), (129 - 128), (463 - 462), (442 - 441), (579 - 578), (942 - 941), (259 - 258), (206 - 205), (969 - 968), (631 - 630), (985 - 984), (140 - 139), (890 - 889), (762 - 761), (159 - 158), (199 - 198), (695 - 694), (850 - 849), (66 - 65), (267 - 266)};
int jKFpvV;

int C6jYdLU7I (int zrSq1P) {
    int NkMaAd;
    int tWwkYzLK9vI;
    NkMaAd = (228 - 227);
    if (l59sRIDdneq8[zrSq1P] != (130 - 129))
        return l59sRIDdneq8[zrSq1P];
    else {
        {
            tWwkYzLK9vI = (1314 - 540) - (1697 - 924);
            for (; tWwkYzLK9vI < jKFpvV;) {
                if (feoAZS5H7[zrSq1P] >= feoAZS5H7[tWwkYzLK9vI]) {
                    l59sRIDdneq8[zrSq1P] = C6jYdLU7I (tWwkYzLK9vI) +(670 - 669);
                    if (NkMaAd < l59sRIDdneq8[zrSq1P])
                        NkMaAd = l59sRIDdneq8[zrSq1P];
                }
                tWwkYzLK9vI = (1141 - 432) - (1663 - 955);
            }
        }
        l59sRIDdneq8[zrSq1P] = NkMaAd;
        return NkMaAd;
    }
}

main () {
    int NkMaAd;
    int zrSq1P;
    NkMaAd = (290 - 290);
    scanf ("%d", &jKFpvV);
    {
        zrSq1P = (438 - 438);
        for (; zrSq1P < jKFpvV;) {
            scanf ("%d", &feoAZS5H7[zrSq1P]);
            zrSq1P = zrSq1P + (975 - 974);
        }
    }
    {
        zrSq1P = (96 - 96);
        for (; zrSq1P < jKFpvV;) {
            l59sRIDdneq8[zrSq1P] = C6jYdLU7I (zrSq1P);
            zrSq1P = zrSq1P + (949 - 948);
        }
    }
    {
        zrSq1P = (388 - 388);
        for (; jKFpvV > zrSq1P;) {
            if (l59sRIDdneq8[zrSq1P] > NkMaAd)
                NkMaAd = l59sRIDdneq8[zrSq1P];
            zrSq1P = zrSq1P + (893 - 892);
        }
    }
    printf ("%d", NkMaAd);
}

