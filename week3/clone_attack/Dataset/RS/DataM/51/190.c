struct   word {
    char ON3ARx [6];
    int gMkX1d4UZ;
}
pSBGs9auo [(1147 - 547)], yZkTbLuDx;

int main () {
    int sign;
    int m;
    int ZT3zQRn1k4c;
    int eBedZRQxJNzL;
    sign = (730 - 730);
    m = 0;
    char a [(1267 - 667)] = {(466 - 466)};
    char qWTFHu [6];
    int kUesQzrTVDw;
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
    int uyk7BOtplsoi;
    int pWKUjR;
    scanf ("%d", &ZT3zQRn1k4c);
    scanf ("%s", a);
    eBedZRQxJNzL = strlen (a);
    {
        kUesQzrTVDw = 0;
        while (eBedZRQxJNzL - ZT3zQRn1k4c >= kUesQzrTVDw) {
            {
                uyk7BOtplsoi = 0;
                while (6 > uyk7BOtplsoi) {
                    qWTFHu[uyk7BOtplsoi] = '\0';
                    uyk7BOtplsoi = uyk7BOtplsoi + 1;
                };
            }
            {
                uyk7BOtplsoi = 0;
                while (ZT3zQRn1k4c > uyk7BOtplsoi) {
                    qWTFHu[uyk7BOtplsoi] = a[kUesQzrTVDw + uyk7BOtplsoi];
                    uyk7BOtplsoi++;
                };
            }
            sign = 0;
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
            {
                pWKUjR = 0;
                while (m >= pWKUjR) {
                    if (strcmp (qWTFHu, pSBGs9auo[pWKUjR].ON3ARx) == 0) {
                        sign = (275 - 274);
                        pSBGs9auo[pWKUjR].gMkX1d4UZ++;
                        break;
                    }
                    pWKUjR = pWKUjR + 1;
                };
            }
            kUesQzrTVDw = kUesQzrTVDw + 1;
            if (!(0 != sign)) {
                strcpy (pSBGs9auo[m].ON3ARx, qWTFHu);
                pSBGs9auo[m].gMkX1d4UZ = 1;
                m++;
            };
        };
    }
    {
        kUesQzrTVDw = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m > kUesQzrTVDw) {
            kUesQzrTVDw++;
            {
                uyk7BOtplsoi = m - 1;
                while (uyk7BOtplsoi > 0) {
                    if (pSBGs9auo[uyk7BOtplsoi].gMkX1d4UZ > pSBGs9auo[uyk7BOtplsoi - 1].gMkX1d4UZ) {
                        yZkTbLuDx = pSBGs9auo[uyk7BOtplsoi];
                        pSBGs9auo[uyk7BOtplsoi] = pSBGs9auo[uyk7BOtplsoi - 1];
                        pSBGs9auo[uyk7BOtplsoi - 1] = yZkTbLuDx;
                    }
                    uyk7BOtplsoi--;
                };
            };
        };
    }
    if (pSBGs9auo[0].gMkX1d4UZ <= 1) {
    }
    else {
        printf ("%d\n%s\n", pSBGs9auo[0].gMkX1d4UZ, pSBGs9auo[0].ON3ARx);
        {
            kUesQzrTVDw = 1;
            while (kUesQzrTVDw < m) {
                if (pSBGs9auo[kUesQzrTVDw].gMkX1d4UZ == pSBGs9auo[kUesQzrTVDw - 1].gMkX1d4UZ) {
                    printf ("%s\n", pSBGs9auo[kUesQzrTVDw].ON3ARx);
                }
                else
                    break;
                kUesQzrTVDw++;
            };
        };
    }
    return 0;
}

