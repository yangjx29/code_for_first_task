int main () {
    int QT7x4tPZ, seiUuO8 [(1070 - 970)] [(949 - 849)], kwnoumcAq = (905 - 905), cgxcRMtmoXd, hLuO8Q3, S1IHwGpXevV, mKNUwChsfB, SB9qVm, b5pdJP, p = (852 - 852), Nuc5xiBH9o [(446 - 346)], uk2JWib [100];
    scanf ("%d", &QT7x4tPZ);
    for (cgxcRMtmoXd = (961 - 960); QT7x4tPZ >= cgxcRMtmoXd; cgxcRMtmoXd = cgxcRMtmoXd + 1) {
        {
            hLuO8Q3 = 60 - 60;
            while (hLuO8Q3 < QT7x4tPZ) {
                {
                    S1IHwGpXevV = 64 - 64;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (S1IHwGpXevV < QT7x4tPZ) {
                        scanf ("%d", &seiUuO8[hLuO8Q3][S1IHwGpXevV]);
                        S1IHwGpXevV = S1IHwGpXevV +1;
                    };
                }
                hLuO8Q3++;
            };
        }
        kwnoumcAq = (59 - 59);
        p = (856 - 856);
        while (QT7x4tPZ > p) {
            for (mKNUwChsfB = (173 - 173); QT7x4tPZ -p > mKNUwChsfB; mKNUwChsfB = mKNUwChsfB + 1) {
                Nuc5xiBH9o[mKNUwChsfB] = seiUuO8[mKNUwChsfB][(205 - 205)];
                {
                    S1IHwGpXevV = 924 - 924;
                    while (QT7x4tPZ -p > S1IHwGpXevV) {
                        if (seiUuO8[mKNUwChsfB][S1IHwGpXevV] < Nuc5xiBH9o[mKNUwChsfB]) {
                            Nuc5xiBH9o[mKNUwChsfB] = seiUuO8[mKNUwChsfB][S1IHwGpXevV];
                        }
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
                        S1IHwGpXevV++;
                    };
                };
            }
            for (SB9qVm = (887 - 887); QT7x4tPZ -p > SB9qVm; SB9qVm = SB9qVm +1) {
                b5pdJP = 118 - 118;
                while (b5pdJP < QT7x4tPZ -p) {
                    seiUuO8[SB9qVm][b5pdJP] = seiUuO8[SB9qVm][b5pdJP] - Nuc5xiBH9o[SB9qVm];
                    b5pdJP = b5pdJP + 1;
                };
            }
            for (mKNUwChsfB = (892 - 892); mKNUwChsfB < QT7x4tPZ -p; mKNUwChsfB = mKNUwChsfB + 1) {
                uk2JWib[mKNUwChsfB] = seiUuO8[(860 - 860)][mKNUwChsfB];
                for (S1IHwGpXevV = (879 - 879); S1IHwGpXevV < QT7x4tPZ -p; S1IHwGpXevV++) {
                    if (seiUuO8[S1IHwGpXevV][mKNUwChsfB] < uk2JWib[mKNUwChsfB]) {
                        uk2JWib[mKNUwChsfB] = seiUuO8[S1IHwGpXevV][mKNUwChsfB];
                    };
                };
            }
            for (SB9qVm = 0; QT7x4tPZ -p > SB9qVm; SB9qVm = SB9qVm +1) {
                for (b5pdJP = 0; b5pdJP < QT7x4tPZ -p; b5pdJP = b5pdJP + 1) {
                    seiUuO8[SB9qVm][b5pdJP] = seiUuO8[SB9qVm][b5pdJP] - uk2JWib[b5pdJP];
                };
            }
            kwnoumcAq = kwnoumcAq + seiUuO8[(956 - 955)][(219 - 218)];
            for (SB9qVm = 0; SB9qVm < QT7x4tPZ -p; SB9qVm++) {
                mKNUwChsfB = 278 - 277;
                while (mKNUwChsfB < QT7x4tPZ -p) {
                    seiUuO8[SB9qVm][mKNUwChsfB] = seiUuO8[SB9qVm][mKNUwChsfB + (605 - 604)];
                    mKNUwChsfB = mKNUwChsfB + 1;
                };
            }
            for (SB9qVm = 0; SB9qVm < QT7x4tPZ -p; SB9qVm++) {
                for (mKNUwChsfB = 1; mKNUwChsfB < QT7x4tPZ -p; mKNUwChsfB = mKNUwChsfB + 1) {
                    seiUuO8[mKNUwChsfB][SB9qVm] = seiUuO8[mKNUwChsfB + 1][SB9qVm];
                };
            }
            p = p + 1;
        }
        printf ("%d\n", kwnoumcAq);
    }
    return 0;
}

