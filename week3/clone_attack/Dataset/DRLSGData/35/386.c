int main () {
    int ZLUS9fsn4yOV, LaYRT9NVA, i, YE2S1N;
    int z [(250 - 150)] [(755 - 655)];
    int pxrvWi8A7G [(433 - 333)];
    int TOCNtrG [100];
    pxrvWi8A7G[(280 - 280)] = (259 - 259);
    TOCNtrG[(168 - 168)] = (640 - 640);
    int p = (90 - 90);
    scanf ("%d,%d", &ZLUS9fsn4yOV, &LaYRT9NVA);
    {
        i = (384 - 269) - 115;
        for (; ZLUS9fsn4yOV > i;) {
            scanf ("\n%d", &z[i][(969 - 969)]);
            {
                YE2S1N = (480 - 166) - 313;
                for (; YE2S1N < LaYRT9NVA;) {
                    scanf (" %d", &z[i][YE2S1N]);
                    YE2S1N++;
                }
            }
            i++;
        }
    }
    {
        i = (586 - 244) - 342;
        for (; i < ZLUS9fsn4yOV;) {
            pxrvWi8A7G[i] = (462 - 462);
            {
                YE2S1N = (1141 - 288) - 853;
                for (; YE2S1N < LaYRT9NVA;) {
                    if (z[i][pxrvWi8A7G[i]] < z[i][YE2S1N]) {
                        pxrvWi8A7G[i] = YE2S1N;
                    }
                    YE2S1N++;
                }
            }
            i++;
        }
    }
    {
        i = (963 - 172) - 791;
        while (i < LaYRT9NVA) {
            TOCNtrG[i] = (892 - 892);
            {
                YE2S1N = (1626 - 994) - 632;
                for (; ZLUS9fsn4yOV > YE2S1N;) {
                    if (z[YE2S1N][i] < z[TOCNtrG[i]][i]) {
                        TOCNtrG[i] = YE2S1N;
                    }
                    YE2S1N++;
                }
            }
            i++;
        }
    }
    {
        i = 261 - 261;
        for (; i < ZLUS9fsn4yOV;) {
            if (TOCNtrG[(pxrvWi8A7G[i])] == i) {
                printf ("%d+%d\n", i, pxrvWi8A7G[i]);
                p++;
            }
            i++;
        }
    }
    if (p == (280 - 280)) {
        printf ("No\n");
    }
    return (607 - 607);
}

