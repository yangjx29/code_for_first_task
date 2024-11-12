struct   Student {
    char cHRTD3lnGi [20];
    int nAqrQT;
    int BZqufK9;
    char pUZANzwCOaDp;
    char BA7nf1K4qaW;
    int g34BFPNe;
};
void  main () {
    struct   Student bWzni2rc [100];
    int bEmLD4wv1pW2, HeLv16pYrc, xfWaQmFwpsC, j8HYOeTUMCso [100] [6], W47VSKPNsmL6;
    long  int sum = 0;
    struct   Student *y6lHfhoQ;
    scanf ("%d", &bEmLD4wv1pW2);
    for (HeLv16pYrc = 0; bEmLD4wv1pW2 > HeLv16pYrc; HeLv16pYrc = HeLv16pYrc +1) {
        xfWaQmFwpsC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (6 > xfWaQmFwpsC) {
            j8HYOeTUMCso[HeLv16pYrc][xfWaQmFwpsC] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            xfWaQmFwpsC = xfWaQmFwpsC + 1;
        };
    }
    {
        y6lHfhoQ = bWzni2rc;
        while (bWzni2rc + bEmLD4wv1pW2 > y6lHfhoQ) {
            scanf ("%s %d %d %c %c %d", y6lHfhoQ->cHRTD3lnGi, &y6lHfhoQ->nAqrQT, &y6lHfhoQ->BZqufK9, &y6lHfhoQ->pUZANzwCOaDp, &y6lHfhoQ->BA7nf1K4qaW, &y6lHfhoQ->g34BFPNe);
            y6lHfhoQ = y6lHfhoQ + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        HeLv16pYrc = 0;
        while (bEmLD4wv1pW2 > HeLv16pYrc) {
            if (80 < bWzni2rc[HeLv16pYrc].nAqrQT && 1 <= bWzni2rc[HeLv16pYrc].g34BFPNe)
                j8HYOeTUMCso[HeLv16pYrc][0] = (8448 - 448);
            if (85 < bWzni2rc[HeLv16pYrc].nAqrQT && 80 < bWzni2rc[HeLv16pYrc].BZqufK9)
                j8HYOeTUMCso[HeLv16pYrc][1] = 4000;
            if (90 < bWzni2rc[HeLv16pYrc].nAqrQT)
                j8HYOeTUMCso[HeLv16pYrc][2] = 2000;
            if (85 < bWzni2rc[HeLv16pYrc].nAqrQT && !('Y' != bWzni2rc[HeLv16pYrc].BA7nf1K4qaW))
                j8HYOeTUMCso[HeLv16pYrc][3] = 1000;
            if (bWzni2rc[HeLv16pYrc].BZqufK9 > 80 && bWzni2rc[HeLv16pYrc].pUZANzwCOaDp == 'Y')
                j8HYOeTUMCso[HeLv16pYrc][4] = 850;
            HeLv16pYrc++;
        };
    }
    {
        HeLv16pYrc = 0;
        while (HeLv16pYrc < bEmLD4wv1pW2) {
            {
                xfWaQmFwpsC = 4;
                while (xfWaQmFwpsC >= 0) {
                    j8HYOeTUMCso[HeLv16pYrc][5] = j8HYOeTUMCso[HeLv16pYrc][5] + j8HYOeTUMCso[HeLv16pYrc][xfWaQmFwpsC];
                    xfWaQmFwpsC = xfWaQmFwpsC - 1;
                };
            }
            HeLv16pYrc++;
        };
    }
    xfWaQmFwpsC = 0;
    W47VSKPNsmL6 = j8HYOeTUMCso[0][5];
    for (HeLv16pYrc = 0; HeLv16pYrc < bEmLD4wv1pW2; HeLv16pYrc = HeLv16pYrc +1)
        if (j8HYOeTUMCso[HeLv16pYrc][5] > W47VSKPNsmL6) {
            W47VSKPNsmL6 = j8HYOeTUMCso[HeLv16pYrc][5];
            xfWaQmFwpsC = HeLv16pYrc;
        }
    printf ("%s\n%d\n", bWzni2rc[xfWaQmFwpsC].cHRTD3lnGi, j8HYOeTUMCso[xfWaQmFwpsC][5]);
    {
        HeLv16pYrc = 0;
        while (HeLv16pYrc < bEmLD4wv1pW2) {
            sum = sum + j8HYOeTUMCso[HeLv16pYrc][5];
            HeLv16pYrc++;
        };
    }
    printf ("%ld", sum);
}

