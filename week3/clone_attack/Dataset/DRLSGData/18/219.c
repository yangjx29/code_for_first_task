int main () {
    int zczWBv;
    int lT4ic0lxRq;
    cin >> lT4ic0lxRq;
    for (zczWBv = (800 - 800); zczWBv < lT4ic0lxRq; zczWBv++) {
        int NcpFeT2;
        int Q9V5v4saFm;
        int MDFkSw;
        int ZpS3HicKXYD;
        int F19WdH [100] [100] = {(579 - 579)};
        int oBYNx4ivm;
        for (MDFkSw = (451 - 451); lT4ic0lxRq > MDFkSw; MDFkSw++) {
            for (ZpS3HicKXYD = (528 - 528); lT4ic0lxRq > ZpS3HicKXYD; ZpS3HicKXYD++)
                cin >> F19WdH[MDFkSw][ZpS3HicKXYD];
        }
        Q9V5v4saFm = (961 - 961);
        NcpFeT2 = lT4ic0lxRq;
        for (; NcpFeT2 > (766 - 765);) {
            for (MDFkSw = (619 - 619); MDFkSw < NcpFeT2; MDFkSw++) {
                oBYNx4ivm = F19WdH[MDFkSw][(596 - 596)];
                for (ZpS3HicKXYD = (74 - 74); NcpFeT2 > ZpS3HicKXYD; ZpS3HicKXYD++) {
                    if (oBYNx4ivm > F19WdH[MDFkSw][ZpS3HicKXYD])
                        oBYNx4ivm = F19WdH[MDFkSw][ZpS3HicKXYD];
                }
                for (ZpS3HicKXYD = (700 - 700); NcpFeT2 > ZpS3HicKXYD; ZpS3HicKXYD++)
                    F19WdH[MDFkSw][ZpS3HicKXYD] -= oBYNx4ivm;
            }
            for (ZpS3HicKXYD = (702 - 702); ZpS3HicKXYD < NcpFeT2; ZpS3HicKXYD++) {
                int w2ymSNDj;
                w2ymSNDj = (553 - 553);
                for (MDFkSw = (350 - 350); MDFkSw < NcpFeT2; MDFkSw++) {
                    if (!((440 - 440) != F19WdH[MDFkSw][ZpS3HicKXYD])) {
                        w2ymSNDj++;
                        break;
                    }
                }
                if (!((481 - 481) != w2ymSNDj)) {
                    oBYNx4ivm = F19WdH[(79 - 79)][ZpS3HicKXYD];
                    for (MDFkSw = (882 - 882); NcpFeT2 > MDFkSw; MDFkSw++) {
                        if (F19WdH[MDFkSw][ZpS3HicKXYD] < oBYNx4ivm)
                            oBYNx4ivm = F19WdH[MDFkSw][ZpS3HicKXYD];
                    }
                    for (MDFkSw = 0; NcpFeT2 > MDFkSw; MDFkSw++)
                        F19WdH[MDFkSw][ZpS3HicKXYD] -= oBYNx4ivm;
                }
            }
            Q9V5v4saFm += F19WdH[(297 - 296)][(703 - 702)];
            for (ZpS3HicKXYD = (82 - 80); ZpS3HicKXYD < NcpFeT2; ZpS3HicKXYD++)
                F19WdH[0][ZpS3HicKXYD -(328 - 327)] = F19WdH[0][ZpS3HicKXYD];
            for (MDFkSw = (357 - 355); MDFkSw < NcpFeT2; MDFkSw++)
                F19WdH[MDFkSw -1][0] = F19WdH[MDFkSw][0];
            for (MDFkSw = (336 - 334); MDFkSw < NcpFeT2; MDFkSw++) {
                for (ZpS3HicKXYD = 2; ZpS3HicKXYD < NcpFeT2; ZpS3HicKXYD++)
                    F19WdH[MDFkSw -1][ZpS3HicKXYD -1] = F19WdH[MDFkSw][ZpS3HicKXYD];
            }
            NcpFeT2--;
        }
        cout << Q9V5v4saFm << endl;
    }
    return 0;
}

