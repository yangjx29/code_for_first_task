void  main () {
    int NZrQY0c;
    int ulhO5A2 [300];
    int bujdVPc [300];
    int FNMspVJIU;
    int kHxvBVtD2;
    int *p;
    int E2fWd5 [500];
    int DhY7yx8wN;
    int gZdwhK6JujV;
    NZrQY0c = (974 - 974);
    do {
        scanf ("%d%d", &ulhO5A2[NZrQY0c], &bujdVPc[NZrQY0c]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        NZrQY0c++;
    }
    while (ulhO5A2[NZrQY0c -(599 - 598)] != (903 - 903));
    FNMspVJIU = NZrQY0c -1;
    NZrQY0c = 0;
    for (NZrQY0c = 0; NZrQY0c < FNMspVJIU; NZrQY0c++) {
        gZdwhK6JujV = 0;
        DhY7yx8wN = 0;
        p = E2fWd5;
        for (kHxvBVtD2 = 0; kHxvBVtD2 < ulhO5A2[NZrQY0c]; kHxvBVtD2++)
            *(p + kHxvBVtD2) = kHxvBVtD2 + 1;
        kHxvBVtD2 = 0;
        while (gZdwhK6JujV < ulhO5A2[NZrQY0c] - 1) {
            if (*(p + kHxvBVtD2) != 0)
                DhY7yx8wN++;
            if (DhY7yx8wN == bujdVPc[NZrQY0c]) {
                gZdwhK6JujV++;
                DhY7yx8wN = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                *(p + kHxvBVtD2) = 0;
            }
            kHxvBVtD2++;
            if (kHxvBVtD2 == ulhO5A2[NZrQY0c])
                kHxvBVtD2 = 0;
        }
        while (*p == 0)
            p++;
        printf ("%d\n", *p);
    };
}

