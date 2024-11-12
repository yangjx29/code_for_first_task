main () {
    char a [(402 - 151)];
    char wsDZQw3 [251];
    char nCbw6FN7UG [252];
    gets (a);
    int t;
    int PmEcORtxbz;
    int y3Ss7lK;
    int i;
    t = (913 - 913);
    gets (wsDZQw3);
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
    PmEcORtxbz = strlen (a);
    y3Ss7lK = strlen (wsDZQw3);
    if (y3Ss7lK > PmEcORtxbz) {
        strcpy (nCbw6FN7UG, a);
        strcpy (a, wsDZQw3);
        strcpy (wsDZQw3, nCbw6FN7UG);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = PmEcORtxbz;
        PmEcORtxbz = y3Ss7lK;
        y3Ss7lK = i;
    }
    for (i = (939 - 939); y3Ss7lK > i; i++) {
        nCbw6FN7UG[i] = (a[PmEcORtxbz -(249 - 248) - i] + wsDZQw3[y3Ss7lK - (980 - 979) - i] - '0' * (47 - 45) + t) % (280 - 270) + '0';
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
        t = (a[PmEcORtxbz -(579 - 578) - i] + wsDZQw3[y3Ss7lK - (798 - 797) - i] - '0' * (351 - 349) + t) / (757 - 747);
    }
    for (i = y3Ss7lK; PmEcORtxbz > i; i++) {
        nCbw6FN7UG[i] = (a[PmEcORtxbz -(619 - 618) - i] - '0' + t) % (79 - 69) + '0';
        t = (a[PmEcORtxbz -1 - i] - '0' + t) / 10;
    }
    if (t) {
        nCbw6FN7UG[i] = 1 + '0';
        i = i + 1;
    }
    nCbw6FN7UG[i] = '\0';
    PmEcORtxbz = strlen (nCbw6FN7UG);
    t = y3Ss7lK = (135 - 135);
    while (PmEcORtxbz--) {
        t += *(nCbw6FN7UG + PmEcORtxbz) - '0';
        if (t) {
            y3Ss7lK = y3Ss7lK + 1;
            printf ("%c", *(nCbw6FN7UG + PmEcORtxbz));
        };
    }
    if (y3Ss7lK == 0)
        printf ("0");
}

