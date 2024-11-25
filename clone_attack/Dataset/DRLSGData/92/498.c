void  AN5eX1OE7 (int QhvTmHUo [], int QDvMN4T) {
    int etW8qsXhH;
    int WXI1aZp5;
    int hlFoJhAR6Kf7;
    {
        hlFoJhAR6Kf7 = (662 - 236) - 426;
        while (QDvMN4T > hlFoJhAR6Kf7) {
            {
                WXI1aZp5 = (1630 - 821) - 808;
                while (WXI1aZp5 < QDvMN4T) {
                    if (QhvTmHUo[WXI1aZp5] < QhvTmHUo[hlFoJhAR6Kf7]) {
                        etW8qsXhH = QhvTmHUo[hlFoJhAR6Kf7];
                        QhvTmHUo[hlFoJhAR6Kf7] = QhvTmHUo[WXI1aZp5];
                        QhvTmHUo[WXI1aZp5] = etW8qsXhH;
                    }
                    WXI1aZp5 = 487 - 486;
                }
            }
            hlFoJhAR6Kf7 = (1130 - 390) - 739;
        }
    }
}

main () {
    for (;;) {
        int XD9F0pE;
        int h0g7ROiKuBpS;
        int QDvMN4T;
        int *r7QwWEH = (int *) malloc (QDvMN4T * sizeof (int));
        int *ToBZgDREO = (int *) malloc (QDvMN4T * sizeof (int));
        int etW8qsXhH;
        int F6M7PEL;
        int W5n4MN6;
        h0g7ROiKuBpS = (591 - 591);
        etW8qsXhH = (600 - 600);
        F6M7PEL = QDvMN4T -(121 - 120);
        XD9F0pE = QDvMN4T -(590 - 589);
        W5n4MN6 = (832 - 832);
        scanf ("%d", &QDvMN4T);
        if (!((15 - 15) != QDvMN4T))
            break;
        printf ("%d\n", W5n4MN6 *200);
        {
            int hlFoJhAR6Kf7 = (336 - 336);
            while (QDvMN4T > hlFoJhAR6Kf7) {
                {
                    if ((989 - 989)) {
                        return 0;
                    }
                }
                scanf ("%d", r7QwWEH + hlFoJhAR6Kf7);
                hlFoJhAR6Kf7 = hlFoJhAR6Kf7 + 1;
            }
        }
        for (int hlFoJhAR6Kf7 = 0;
        hlFoJhAR6Kf7 < QDvMN4T; hlFoJhAR6Kf7++) {
            scanf ("%d", ToBZgDREO +hlFoJhAR6Kf7);
        }
        AN5eX1OE7 (r7QwWEH, QDvMN4T);
        AN5eX1OE7 (ToBZgDREO, QDvMN4T);
        for (; 1 <= QDvMN4T; QDvMN4T--) {
            if (*(ToBZgDREO +h0g7ROiKuBpS) < *(r7QwWEH + etW8qsXhH)) {
                h0g7ROiKuBpS++;
                W5n4MN6 = W5n4MN6 +1;
                etW8qsXhH = etW8qsXhH + 1;
            }
            else if (!(*(ToBZgDREO +h0g7ROiKuBpS) != *(r7QwWEH + etW8qsXhH))) {
                if (*(r7QwWEH + XD9F0pE) > *(ToBZgDREO +F6M7PEL)) {
                    W5n4MN6++;
                    F6M7PEL = F6M7PEL -1;
                    XD9F0pE--;
                }
                else if (*(r7QwWEH + XD9F0pE) <= *(ToBZgDREO +F6M7PEL)) {
                    if (*(r7QwWEH + etW8qsXhH) < *(ToBZgDREO +F6M7PEL))
                        W5n4MN6 = W5n4MN6 -1;
                    etW8qsXhH = etW8qsXhH + 1;
                    F6M7PEL = F6M7PEL -1;
                }
            }
            else if (*(r7QwWEH + etW8qsXhH) < *(ToBZgDREO +h0g7ROiKuBpS)) {
                F6M7PEL--;
                etW8qsXhH++;
                W5n4MN6--;
            }
        }
    }
}

