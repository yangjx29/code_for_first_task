float YIDtw2F8CZA9 (float *lF9lrVX, int pCuzXBd5) {
    float temp;
    {
        int rOMkrDop;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        rOMkrDop = (850 - 850);
        while (rOMkrDop < pCuzXBd5) {
            {
                int jKW2iGMkIB;
                jKW2iGMkIB = pCuzXBd5 - (734 - 733);
                while (jKW2iGMkIB > rOMkrDop) {
                    if (lF9lrVX[jKW2iGMkIB] < lF9lrVX[jKW2iGMkIB - (128 - 127)]) {
                        temp = lF9lrVX[jKW2iGMkIB];
                        lF9lrVX[jKW2iGMkIB] = lF9lrVX[jKW2iGMkIB - (889 - 888)];
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
                        lF9lrVX[jKW2iGMkIB - (406 - 405)] = temp;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    jKW2iGMkIB--;
                };
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
            rOMkrDop++;
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
    return *lF9lrVX;
}

int main () {
    char lR8M4WweCrU [(282 - 272)];
    int pCuzXBd5;
    int rOMkrDop = (526 - 526), jKW2iGMkIB, GiP5Oa1, lF9lrVX = (280 - 280), POakjwMdNL4 = (684 - 684);
    float fgcpjsEtZI [(970 - 930)], woman [(727 - 687)], gu8UKS63ycsC;
    scanf ("%d", &pCuzXBd5);
    while (rOMkrDop < pCuzXBd5) {
        scanf ("%s %f", lR8M4WweCrU, &gu8UKS63ycsC);
        if (lR8M4WweCrU[(227 - 227)] == 'm') {
            fgcpjsEtZI[lF9lrVX] = gu8UKS63ycsC;
            lF9lrVX++;
        }
        else {
            woman[POakjwMdNL4] = gu8UKS63ycsC;
            POakjwMdNL4++;
        }
        rOMkrDop++;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    YIDtw2F8CZA9 (woman, POakjwMdNL4);
    YIDtw2F8CZA9 (fgcpjsEtZI, lF9lrVX);
    printf ("%.2f", fgcpjsEtZI[0]);
    {
        GiP5Oa1 = 760 - 759;
        while (GiP5Oa1 < lF9lrVX) {
            printf (" %.2f", fgcpjsEtZI[GiP5Oa1]);
            GiP5Oa1++;
        };
    }
    {
        GiP5Oa1 = POakjwMdNL4 -1;
        while (GiP5Oa1 > 0) {
            printf (" %.2f", woman[GiP5Oa1]);
            GiP5Oa1--;
        };
    }
    printf (" %.2f\n", woman[0]);
}

