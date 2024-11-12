void  main () {
    int SLcj3zuvd7OY, fKiA4BGx, pcMLwmErv;
    int K03nwi = (744 - 744);
    int xPbRLNT = (106 - 106);
    int qVWHXSY (int NtZGAT285B1P [] [(846 - 646)], int K03nwi);
    scanf ("%d", &K03nwi);
    {
        SLcj3zuvd7OY = (87 - 87);
        while (SLcj3zuvd7OY < K03nwi) {
            int NtZGAT285B1P [(491 - 291)] [(697 - 497)] = {(21 - 21)};
            int vZ6pchgFt = (185 - 185);
            {
                fKiA4BGx = (66 - 66);
                while (fKiA4BGx < K03nwi) {
                    pcMLwmErv = (16 - 16);
                    for (; pcMLwmErv < K03nwi;) {
                        scanf ("%d", &NtZGAT285B1P[fKiA4BGx][pcMLwmErv]);
                        pcMLwmErv++;
                    }
                    fKiA4BGx++;
                }
            }
            vZ6pchgFt = qVWHXSY (NtZGAT285B1P, K03nwi);
            printf ("%d\n", vZ6pchgFt);
            SLcj3zuvd7OY++;
        }
    }
}

int qVWHXSY (int NtZGAT285B1P [] [200], int K03nwi) {
    int WPs7M5HE = (392 - 392);
    int SLcj3zuvd7OY = (736 - 736), fKiA4BGx = (940 - 940), pcMLwmErv = (181 - 181);
    int xPbRLNT = 0;
    int vZ6pchgFt = 0;
    {
        xPbRLNT = 0;
        while (xPbRLNT < K03nwi -(36 - 35)) {
            xPbRLNT++;
            {
                SLcj3zuvd7OY = 0;
                for (; SLcj3zuvd7OY < K03nwi;) {
                    WPs7M5HE = NtZGAT285B1P[SLcj3zuvd7OY][0];
                    {
                        fKiA4BGx = 0;
                        while (fKiA4BGx < K03nwi) {
                            if (NtZGAT285B1P[SLcj3zuvd7OY][fKiA4BGx] < WPs7M5HE) {
                                WPs7M5HE = NtZGAT285B1P[SLcj3zuvd7OY][fKiA4BGx];
                            }
                            fKiA4BGx++;
                        }
                    }
                    {
                        fKiA4BGx = 0;
                        while (fKiA4BGx < K03nwi) {
                            NtZGAT285B1P[SLcj3zuvd7OY][fKiA4BGx] = NtZGAT285B1P[SLcj3zuvd7OY][fKiA4BGx] - WPs7M5HE;
                            fKiA4BGx++;
                        }
                    }
                    SLcj3zuvd7OY++;
                }
            }
            {
                SLcj3zuvd7OY = 0;
                while (SLcj3zuvd7OY < K03nwi) {
                    WPs7M5HE = NtZGAT285B1P[0][SLcj3zuvd7OY];
                    {
                        fKiA4BGx = 0;
                        for (; fKiA4BGx < K03nwi;) {
                            if (NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY] < WPs7M5HE) {
                                WPs7M5HE = NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY];
                            }
                            fKiA4BGx++;
                        }
                    }
                    {
                        fKiA4BGx = 0;
                        for (; fKiA4BGx < K03nwi;) {
                            NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY] = NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY] - WPs7M5HE;
                            fKiA4BGx++;
                        }
                    }
                    SLcj3zuvd7OY++;
                }
            }
            vZ6pchgFt += NtZGAT285B1P[(564 - 563)][(503 - 502)];
            {
                fKiA4BGx = 0;
                for (; fKiA4BGx < K03nwi;) {
                    {
                        SLcj3zuvd7OY = 2;
                        for (; SLcj3zuvd7OY < K03nwi;) {
                            NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY -(448 - 447)] = NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY];
                            SLcj3zuvd7OY++;
                        }
                    }
                    NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY] = 0;
                    fKiA4BGx++;
                }
            }
            {
                fKiA4BGx = 0;
                for (; fKiA4BGx < K03nwi;) {
                    {
                        SLcj3zuvd7OY = 2;
                        for (; SLcj3zuvd7OY < K03nwi;) {
                            NtZGAT285B1P[SLcj3zuvd7OY -1][fKiA4BGx] = NtZGAT285B1P[SLcj3zuvd7OY][fKiA4BGx];
                            SLcj3zuvd7OY++;
                        }
                    }
                    NtZGAT285B1P[fKiA4BGx][SLcj3zuvd7OY] = 0;
                    fKiA4BGx++;
                }
            }
        }
    }
    return vZ6pchgFt;
}

