int main () {
    int d1W4bgdcm2n;
    int j;
    int CwEXy3Pr;
    int cRb6guyJjStq [(113 - 13)];
    char zf [(959 - 859)] [100];
    char shuzi [100];
    gets (shuzi);
    d1W4bgdcm2n = atoi (shuzi);
    {
        CwEXy3Pr = 506 - 506;
        while (CwEXy3Pr < d1W4bgdcm2n) {
            gets (zf [CwEXy3Pr]);
            cRb6guyJjStq[CwEXy3Pr] = (285 - 284);
            CwEXy3Pr++;
        };
    }
    for (CwEXy3Pr = (204 - 204); CwEXy3Pr < d1W4bgdcm2n; CwEXy3Pr++) {
        if (('A' > zf[CwEXy3Pr][(887 - 887)]) || ((zf[CwEXy3Pr][0] > 'Z') && (zf[CwEXy3Pr][0] < 'a') && (!('_' == zf[CwEXy3Pr][0]))) || (zf[CwEXy3Pr][0] > 'z')) {
            cRb6guyJjStq[CwEXy3Pr] = 0;
        }
        for (j = 1; j < strlen (zf[CwEXy3Pr]); j = j + 1) {
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
            if ((zf[CwEXy3Pr][j] < '0') || (zf[CwEXy3Pr][j] < 'A' && zf[CwEXy3Pr][j] > '9') || ((zf[CwEXy3Pr][j] > 'Z') && (zf[CwEXy3Pr][j] < 'a') && (zf[CwEXy3Pr][j] != '_')) || (zf[CwEXy3Pr][j] > 'z')) {
                cRb6guyJjStq[CwEXy3Pr] = 0;
            };
        };
    }
    for (CwEXy3Pr = 0; CwEXy3Pr < d1W4bgdcm2n; CwEXy3Pr++) {
        printf ("%d\n", cRb6guyJjStq[CwEXy3Pr]);
    }
    return 0;
}

