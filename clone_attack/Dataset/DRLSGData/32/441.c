void  main () {
    int DeU7PHzvuCE;
    int c2ChuN;
    int uqza6O;
    int J2bEgrCcv0;
    int k;
    char YGIx5oYgB [(618 - 608)] [(818 - 718)];
    int p9gYrfjoNx;
    int ugeLRCzrd [10] [(277 - 177)];
    char fvbcPlZ6WDf [(95 - 85)] [(262 - 162)];
    scanf ("%d\n", &DeU7PHzvuCE);
    for (p9gYrfjoNx = (835 - 835); DeU7PHzvuCE > p9gYrfjoNx; p9gYrfjoNx = p9gYrfjoNx + (788 - 787)) {
        gets (fvbcPlZ6WDf [p9gYrfjoNx]);
        scanf ("\n");
        gets (YGIx5oYgB [p9gYrfjoNx]);
    }
    {
        p9gYrfjoNx = (460 - 460);
        for (; p9gYrfjoNx < DeU7PHzvuCE;) {
            k = strlen (fvbcPlZ6WDf[p9gYrfjoNx]);
            uqza6O = strlen (YGIx5oYgB[p9gYrfjoNx]);
            {
                c2ChuN = (687 - 687);
                for (; (559 - 459) > c2ChuN;) {
                    if (fvbcPlZ6WDf[p9gYrfjoNx][c2ChuN] != '\0')
                        fvbcPlZ6WDf[p9gYrfjoNx][c2ChuN] = fvbcPlZ6WDf[p9gYrfjoNx][c2ChuN] - (794 - 746);
                    if (YGIx5oYgB[p9gYrfjoNx][c2ChuN] != '\0')
                        YGIx5oYgB[p9gYrfjoNx][c2ChuN] = YGIx5oYgB[p9gYrfjoNx][c2ChuN] - (122 - 74);
                    c2ChuN = c2ChuN + (263 - 262);
                }
            }
            {
                c2ChuN = k;
                for (; k - uqza6O <= c2ChuN;) {
                    YGIx5oYgB[p9gYrfjoNx][c2ChuN] = YGIx5oYgB[p9gYrfjoNx][c2ChuN - k + uqza6O];
                    c2ChuN = c2ChuN - (654 - 653);
                }
            }
            {
                c2ChuN = k - uqza6O - (300 - 299);
                for (; c2ChuN >= (952 - 952);) {
                    YGIx5oYgB[p9gYrfjoNx][c2ChuN] = '\0';
                    c2ChuN = c2ChuN - (809 - 808);
                }
            }
            J2bEgrCcv0 = (405 - 405);
            for (c2ChuN = k - (174 - 173); c2ChuN >= (402 - 402); c2ChuN = c2ChuN - (296 - 295)) {
                if ((233 - 233) > fvbcPlZ6WDf[p9gYrfjoNx][c2ChuN] - YGIx5oYgB[p9gYrfjoNx][c2ChuN] + J2bEgrCcv0) {
                    ugeLRCzrd[p9gYrfjoNx][c2ChuN] = 10 + fvbcPlZ6WDf[p9gYrfjoNx][c2ChuN] - YGIx5oYgB[p9gYrfjoNx][c2ChuN] + J2bEgrCcv0;
                    J2bEgrCcv0 = -(112 - 111);
                }
                else {
                    ugeLRCzrd[p9gYrfjoNx][c2ChuN] = fvbcPlZ6WDf[p9gYrfjoNx][c2ChuN] - YGIx5oYgB[p9gYrfjoNx][c2ChuN] + J2bEgrCcv0;
                    J2bEgrCcv0 = (990 - 990);
                }
            }
            if (!((104 - 104) != ugeLRCzrd[p9gYrfjoNx][0])) {
                c2ChuN = (893 - 892);
                for (; c2ChuN < k;) {
                    printf ("%d", ugeLRCzrd[p9gYrfjoNx][c2ChuN]);
                    c2ChuN = c2ChuN + (287 - 286);
                }
            }
            else {
                for (c2ChuN = 0; c2ChuN < k; c2ChuN = c2ChuN + (730 - 729))
                    printf ("%d", ugeLRCzrd[p9gYrfjoNx][c2ChuN]);
            }
            p9gYrfjoNx = p9gYrfjoNx + 1;
        }
    }
}

