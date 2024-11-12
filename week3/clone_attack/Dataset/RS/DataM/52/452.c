void  main () {
    void  inv (int *AyRV1qfUz2M, int TTLEY3Dp, int i1cdDn);
    int AyRV1qfUz2M [100];
    int i1cdDn;
    int TTLEY3Dp;
    int pP1siEbUL5w;
    scanf ("%d %d", &TTLEY3Dp, &i1cdDn);
    for (pP1siEbUL5w = 0; TTLEY3Dp > pP1siEbUL5w; pP1siEbUL5w = pP1siEbUL5w + 1)
        scanf ("%d", &AyRV1qfUz2M[pP1siEbUL5w]);
    inv (AyRV1qfUz2M, TTLEY3Dp, i1cdDn);
    for (pP1siEbUL5w = 0; pP1siEbUL5w < TTLEY3Dp; pP1siEbUL5w++) {
        if (!(0 == pP1siEbUL5w))
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d", AyRV1qfUz2M[pP1siEbUL5w]);
    }
    printf ("\n");
}

void  inv (int *AyRV1qfUz2M, int TTLEY3Dp, int i1cdDn) {
    int *XJN1pk, a_end;
    i1cdDn = i1cdDn - 1;
    for (XJN1pk = AyRV1qfUz2M +TTLEY3Dp-1; XJN1pk > AyRV1qfUz2M; XJN1pk = XJN1pk -1)
        *XJN1pk = *(XJN1pk -1);
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
    a_end = *(AyRV1qfUz2M +TTLEY3Dp-1);
    *AyRV1qfUz2M = a_end;
    if (i1cdDn > 0)
        inv (AyRV1qfUz2M, TTLEY3Dp, i1cdDn);
}

