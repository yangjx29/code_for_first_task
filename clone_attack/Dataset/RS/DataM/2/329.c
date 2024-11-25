struct   book {
    int num;
    char pQWPtbepLdi [26];
};
char fYmDtgJ (int *wh1nM0);

int main () {
    int tCJBUKpHcrt, ohEzG6mycS4, uusL1Kef7Aq9, *wh1nM0;
    struct   book hWbwQR [999];
    char d59Mtzpd;
    int B0bLI12naPiM [26];
    scanf ("%d", &tCJBUKpHcrt);
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
    for (uusL1Kef7Aq9 = 0; tCJBUKpHcrt > uusL1Kef7Aq9; uusL1Kef7Aq9++) {
        scanf ("%d%s", &hWbwQR[uusL1Kef7Aq9].num, hWbwQR[uusL1Kef7Aq9].pQWPtbepLdi);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        d59Mtzpd = 'A';
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
        B0bLI12naPiM[d59Mtzpd - 'A'] = 0;
        while ('Z' >= d59Mtzpd) {
            B0bLI12naPiM[d59Mtzpd - 'A'] = 0;
            {
                uusL1Kef7Aq9 = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (tCJBUKpHcrt > uusL1Kef7Aq9) {
                    {
                        ohEzG6mycS4 = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        while (!('\0' == hWbwQR[uusL1Kef7Aq9].pQWPtbepLdi[ohEzG6mycS4])) {
                            if (d59Mtzpd == hWbwQR[uusL1Kef7Aq9].pQWPtbepLdi[ohEzG6mycS4]) {
                                B0bLI12naPiM[d59Mtzpd - 'A']++;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        int m = 0;
                                        int n = 0;
                                        m = m * n + n - m + n * 2;
                                        return 0;
                                    }
                                };
                            }
                            ohEzG6mycS4++;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    uusL1Kef7Aq9++;
                };
            }
            d59Mtzpd = d59Mtzpd + 1;
        };
    }
    wh1nM0 = B0bLI12naPiM;
    printf ("%c\n%d\n", fYmDtgJ (wh1nM0), B0bLI12naPiM[fYmDtgJ (wh1nM0) - 'A']);
    {
        uusL1Kef7Aq9 = 0;
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
        while (uusL1Kef7Aq9 < tCJBUKpHcrt) {
            for (ohEzG6mycS4 = 0; hWbwQR[uusL1Kef7Aq9].pQWPtbepLdi[ohEzG6mycS4] != '\0'; ohEzG6mycS4++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (fYmDtgJ (wh1nM0) == hWbwQR[uusL1Kef7Aq9].pQWPtbepLdi[ohEzG6mycS4]) {
                    printf ("%d\n", hWbwQR[uusL1Kef7Aq9].num);
                };
            }
            uusL1Kef7Aq9++;
        };
    }
    return 0;
}

char fYmDtgJ (int *wh1nM0) {
    int uusL1Kef7Aq9;
    char fYmDtgJ;
    for (uusL1Kef7Aq9 = 0, fYmDtgJ = 'A'; uusL1Kef7Aq9 < 26; uusL1Kef7Aq9++) {
        if (*(wh1nM0 + uusL1Kef7Aq9) > *(wh1nM0 + fYmDtgJ - 'A')) {
            fYmDtgJ = uusL1Kef7Aq9 + 'A';
        };
    }
    return fYmDtgJ;
}

