int huiwen (int hsXKxfGNaJ, int Ntr3TcgDp);
int Ypf5nG (int hsXKxfGNaJ);

void  main () {
    int RLpcjnrsyK;
    int dKNmtLTIdYb;
    int A2ogd5f;
    int gZ9x7C2;
    int j;
    int mnVPybv;
    int pAbtJzRsCg [10000];
    int CUplvSfLV3I;
    RLpcjnrsyK = (837 - 837);
    scanf ("%d%d", &dKNmtLTIdYb, &A2ogd5f);
    for (gZ9x7C2 = dKNmtLTIdYb; A2ogd5f >= gZ9x7C2; gZ9x7C2 = gZ9x7C2 + 1) {
        if ((gZ9x7C2 == huiwen (gZ9x7C2, (353 - 353))) && (Ypf5nG (gZ9x7C2) == (600 - 599))) {
            pAbtJzRsCg[RLpcjnrsyK] = gZ9x7C2;
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
            RLpcjnrsyK = RLpcjnrsyK +(108 - 107);
        };
    }
    for (gZ9x7C2 = 0; gZ9x7C2 < RLpcjnrsyK; gZ9x7C2 = gZ9x7C2 + 1) {
        CUplvSfLV3I = gZ9x7C2;
        for (j = gZ9x7C2 + 1; j < RLpcjnrsyK; j = j + 1)
            if (pAbtJzRsCg[CUplvSfLV3I] > pAbtJzRsCg[j])
                CUplvSfLV3I = j;
        if (CUplvSfLV3I != gZ9x7C2) {
            mnVPybv = pAbtJzRsCg[gZ9x7C2];
            pAbtJzRsCg[gZ9x7C2] = pAbtJzRsCg[CUplvSfLV3I];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pAbtJzRsCg[CUplvSfLV3I] = mnVPybv;
        };
    }
    if (pAbtJzRsCg[0] == 0)
        ;
    else {
        printf ("%d", pAbtJzRsCg[0]);
        for (gZ9x7C2 = 1; gZ9x7C2 < RLpcjnrsyK; gZ9x7C2 = gZ9x7C2 + 1)
            printf (",%d", pAbtJzRsCg[gZ9x7C2]);
    };
}

int huiwen (int hsXKxfGNaJ, int Ntr3TcgDp) {
    if (hsXKxfGNaJ == 0)
        return (Ntr3TcgDp);
    else
        return (huiwen (hsXKxfGNaJ / 10, Ntr3TcgDp *10 + hsXKxfGNaJ % 10));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
}

int Ypf5nG (int hsXKxfGNaJ) {
    int j;
    for (j = 2; j <= hsXKxfGNaJ; j = j + 1)
        if (hsXKxfGNaJ % j == 0)
            if (j != hsXKxfGNaJ) {
                return (0);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
            else {
                return (1);
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

