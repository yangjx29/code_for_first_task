int ksYLEPa4G [(435 - 430)] [5];
int scan (int N, int nI81wvZ4abK);

void  main () {
    int iiyleIEv;
    int lq9skF1I;
    int pTD4iC;
    int RzhLOGj;
    for (pTD4iC = 0; 5 > pTD4iC; pTD4iC = pTD4iC + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (RzhLOGj = 0; 5 > RzhLOGj; RzhLOGj = RzhLOGj +1) {
            scanf ("%d", &ksYLEPa4G[pTD4iC][RzhLOGj]);
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
            };
        };
    }
    scanf ("%d%d", &iiyleIEv, &lq9skF1I);
    if (scan (iiyleIEv, lq9skF1I) == 1) {
        for (pTD4iC = 0; 5 > pTD4iC; pTD4iC = pTD4iC + 1) {
            for (RzhLOGj = 0; RzhLOGj < 5; RzhLOGj = RzhLOGj +1) {
                printf ("%d", ksYLEPa4G[pTD4iC][RzhLOGj]);
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
                if (RzhLOGj != 4) {
                    printf (" ");
                };
            }
            if (!(4 == pTD4iC)) {
                printf ("\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        };
    }
    else {
        if (scan (iiyleIEv, lq9skF1I) == 0) {
            printf ("error\n");
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
            };
        };
    };
}

int scan (int N, int nI81wvZ4abK) {
    int pTD4iC;
    int SRXm7VOTYo [5];
    if ((N >= 0) && (N < 5) && (nI81wvZ4abK >= 0) && (nI81wvZ4abK < 5)) {
        for (pTD4iC = 0; pTD4iC < 5; pTD4iC = pTD4iC + 1) {
            SRXm7VOTYo[pTD4iC] = ksYLEPa4G[N][pTD4iC];
            ksYLEPa4G[N][pTD4iC] = ksYLEPa4G[nI81wvZ4abK][pTD4iC];
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
            ksYLEPa4G[nI81wvZ4abK][pTD4iC] = SRXm7VOTYo[pTD4iC];
        }
        return 1;
    }
    else {
        return 0;
    };
}

