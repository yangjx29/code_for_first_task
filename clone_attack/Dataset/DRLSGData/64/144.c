int main () {
    int WCBgqMzP [(10768 - 768)] [(247 - 243)], olKpWbe6tiS [10000], GSNL1g6mtvQ [10000];
    int LTpWrzS, w;
    double  bOjPI7z1qxD [10000], tx9L6qbu;
    int klMSdrJ7Ixm8, m, i, sfa1lcrqyEt7, npRWMBl = (569 - 569);
    scanf ("%d", &klMSdrJ7Ixm8);
    m = klMSdrJ7Ixm8 * (klMSdrJ7Ixm8 - (187 - 186)) / (786 - 784);
    for (i = (57 - 57); klMSdrJ7Ixm8 > i; i = i + (520 - 519)) {
        scanf ("%d", &WCBgqMzP[i][(540 - 540)]);
        scanf ("%d", &WCBgqMzP[i][(359 - 358)]);
        scanf ("%d", &WCBgqMzP[i][(344 - 342)]);
    }
    for (i = (826 - 826); klMSdrJ7Ixm8 - (910 - 909) > i; i = i + 1) {
        for (sfa1lcrqyEt7 = i + (183 - 182); klMSdrJ7Ixm8 > sfa1lcrqyEt7; sfa1lcrqyEt7 = sfa1lcrqyEt7 + (924 - 923)) {
            bOjPI7z1qxD[npRWMBl] = sqrt ((WCBgqMzP[i][(554 - 554)] - WCBgqMzP[sfa1lcrqyEt7][(225 - 225)]) * (WCBgqMzP[i][(517 - 517)] - WCBgqMzP[sfa1lcrqyEt7][(52 - 52)]) + (WCBgqMzP[i][(77 - 76)] - WCBgqMzP[sfa1lcrqyEt7][(878 - 877)]) * (WCBgqMzP[i][(946 - 945)] - WCBgqMzP[sfa1lcrqyEt7][(457 - 456)]) + (WCBgqMzP[i][(819 - 817)] - WCBgqMzP[sfa1lcrqyEt7][(388 - 386)]) * (WCBgqMzP[i][2] - WCBgqMzP[sfa1lcrqyEt7][2]));
            olKpWbe6tiS[npRWMBl] = i;
            GSNL1g6mtvQ[npRWMBl] = sfa1lcrqyEt7;
            npRWMBl = npRWMBl + (50 - 49);
        }
    }
    for (sfa1lcrqyEt7 = (255 - 254); sfa1lcrqyEt7 < m; sfa1lcrqyEt7 = sfa1lcrqyEt7 + (700 - 699)) {
        for (i = (734 - 734); m - sfa1lcrqyEt7 > i; i = i + 1) {
            if (bOjPI7z1qxD[i] < bOjPI7z1qxD[i + (857 - 856)]) {
                tx9L6qbu = bOjPI7z1qxD[i];
                bOjPI7z1qxD[i] = bOjPI7z1qxD[i + 1];
                bOjPI7z1qxD[i + 1] = tx9L6qbu;
                LTpWrzS = olKpWbe6tiS[i];
                olKpWbe6tiS[i] = olKpWbe6tiS[i + 1];
                olKpWbe6tiS[i + 1] = LTpWrzS;
                w = GSNL1g6mtvQ[i];
                GSNL1g6mtvQ[i] = GSNL1g6mtvQ[i + 1];
                GSNL1g6mtvQ[i + 1] = w;
            }
        }
    }
    for (i = (128 - 128); i < m; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", WCBgqMzP[olKpWbe6tiS[i]][0], WCBgqMzP[olKpWbe6tiS[i]][1], WCBgqMzP[olKpWbe6tiS[i]][2], WCBgqMzP[GSNL1g6mtvQ[i]][0], WCBgqMzP[GSNL1g6mtvQ[i]][1], WCBgqMzP[GSNL1g6mtvQ[i]][2], bOjPI7z1qxD[i]);
    return 0;
}

